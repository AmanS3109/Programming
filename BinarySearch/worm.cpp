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


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // prefix sum
    for (int i = 1; i < n; i++){
        arr[i] += arr[i-1];
    } 

    int m;
    cin >> m;

    while (m--){
        int q;
        cin >> q;

        int ans = lowerBound(arr, n, q) + 1; // lowebound + 1 --> 0 based indexing

        cout << ans << "\n";
    }

    return 0;
}
 
