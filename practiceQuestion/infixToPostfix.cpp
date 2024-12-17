#include <bits/stdc++.h>
using namespace std;

// Function to convert infix to postfix
string infixToPostfix(string s) {
    stack<char> st;
    string res;
    unordered_map<char, int> mp;
    mp['+'] = 1;
    mp['-'] = 1;
    mp['*'] = 2;
    mp['/'] = 2;
    mp['^'] = 3;

    for (char c : s) {
        if (isalnum(c)) {
            res += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && mp[st.top()] >= mp[c]) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    // Redirect input/output to files
    freopen("in.txt", "r", stdin);  // Read input from in.txt
    freopen("out.txt", "w", stdout);  // Write output to out.txt

    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;  // Number of test cases
    cin >> T;

    for (int c = 1; c <= T; c++) {
        string infixExpression;
        cin >> infixExpression;

        // Convert to postfix
        string postfixExpression = infixToPostfix(infixExpression);

        // Output result
        cout << "Case #" << c << ":\n";
        cout << postfixExpression << "\n";
    }

    return 0;
}
