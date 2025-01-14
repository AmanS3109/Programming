// add 2 arrays

#include <bits/stdc++.h>
using namespace std;

// Declare the function before main
vector<int> FindArraySum(vector<int>& nums1, vector<int>& nums2);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> nums1(n);
    vector<int> nums2(m);

    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    vector<int> result = FindArraySum(nums1, nums2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

// Define the function after main
vector<int> FindArraySum(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> result;

    // Fix: Add parentheses around conditions in while loops
    while (i >= 0 && j >= 0) {
        int sum = nums1[i] + nums2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        i--;
        j--;
    }

    // First case
    while (i >= 0) {
        int sum = nums1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        i--;
    }

    // Second case
    while (j >= 0) {
        int sum = nums2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        j--;
    }

    // Last case
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}
