#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

void nextPermutation(vi& nums) {
    int n = nums.size();
    int ind = -1;

    // Step 1: Find the first decreasing element from the right
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            ind = i;
            break;  // Stop once you find the first decreasing element
        }
    }

    // Step 2: If no such element is found, the array is in descending order
    if (ind == -1) {
        reverse(nums.begin(), nums.end());  // Reverse to the lowest possible permutation
        return;
    }

    // Step 3: Find the element just larger than nums[ind] to swap
    for (int i = n - 1; i > ind; i--) {
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // Step 4: Reverse the part of the array after the swapped element
    reverse(nums.begin() + ind + 1, nums.end());
}

int main() {
    // Redirection for input/output files
    freopen("in.txt", "r", stdin);  // Read from in.txt
    freopen("out.txt", "w", stdout);  // Write to out.txt
    
    std::ios::sync_with_stdio(false);

    int T;  // test cases
    cin >> T;
    for (int c = 1; c <= T; c++) {
        int N;  // size of array
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        nextPermutation(arr);

        // Print the result
        cout << "case #" << c << ": ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
