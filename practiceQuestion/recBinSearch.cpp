#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vs vector<int>
#define vll vector<long long int>

// Binary search function
int bs(vector<int> &arr, int target, int start, int end) {
    if (start > end) return -1; // Target not found
    int mid = start + (end - start) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] < target) {
        return bs(arr, target, mid + 1, end);
    } else {
        return bs(arr, target, start, mid - 1);
    }
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
        int N; // Size of the array
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i]; // Input elements
        }
        int target;
        cin >> target; // Input target value to search for
        
        // Perform binary search
        int result = bs(arr, target, 0, N - 1);

        // Output the result for each test case
        cout << "Case #" << c << ": ";
        if (result != -1) {
            cout << "Target found at index " << result << endl;
        } else {
            cout << "Target not found" << endl;
        }
    }

    return 0;
}
