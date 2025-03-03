#include <bits/stdc++.h>
using namespace std;

int lowerBound(const vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end()); // decreasing order

    // Convert to prefix sum
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
    }

    while (q--) {
        int x;
        cin >> x;
        int ans = lowerBound(arr, n, x);
        if (ans == -1) {
            cout << "-1\n";
        } else {
            cout << ans + 1 << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// TC : O[(n+q)logn]