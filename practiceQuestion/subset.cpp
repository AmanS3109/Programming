#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

void printSubset(vector<int> &arr, vector<int> &subset, int i) {
    // Base case
    if (i == arr.size()) {
        for (int x : subset) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    // Inclusion
    subset.push_back(arr[i]);
    printSubset(arr, subset, i + 1);

    // Backtrack
    subset.pop_back();

    // Exclusion
    printSubset(arr, subset, i + 1);
}

int main() {
    // Redirection for input/output files
    freopen("in.txt", "r", stdin);  // Read from in.txt
    freopen("out.txt", "w", stdout);  // Write to out.txt

    std::ios::sync_with_stdio(false);

    int T;  // Test cases
    cin >> T;

    for (int c = 1; c <= T; c++) {
        int N;  // Size of array
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        // Print case number
        cout << "Case #" << c << ":\n";

        // Generate subsets
        vi subset;
        printSubset(arr, subset, 0);
    }

    return 0;
}
