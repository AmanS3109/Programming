#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vs  vector<string>
#define vll vector<long long int>

int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for (const string& operation : operations) {
        if (operation.find('-') != string::npos) { // Check if '-' is in the string
            x -= 1;
        } else {
            x += 1;
        }
    }
    return x;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    std::ios::sync_with_stdio(false);
    cin.tie(0); // Optimize input/output
    
    int T;  // Number of test cases
    cin >> T;
    for (int c = 1; c <= T; c++) {
        int N; // Size of operations array
        cin >> N;
        vs operations;
        for (int i = 0; i < N; i++) {
            string op; // Operations are strings like "--X" or "X++"
            cin >> op;
            operations.push_back(op);
        }

        // Output the result for each test case
        cout << "Case #" << c << ": " << finalValueAfterOperations(operations) << endl;
    }

    return 0;
}

