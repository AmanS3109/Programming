// maximum jump need to reach last index
// 1. greedy
// 2. dp
// 3. bfs
// 4. dfs
// 5. backtracking
// 6. binary search
// 7. segment tree
// 8. fenwick tree
// 9. disjoint set union
// 10. trie
// 11. stack
// 12. queue
// 13. heap
// 14. hash table

#include <bits/stdc++.h>
using namespace std;

// Function prototype
bool canJump(vector<int>& nums);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n = 100005;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] < 0 || nums[i] > 1e6) { // Validate nums values
            cerr << "Invalid nums value. Must be between 0 and 1e6." << endl;
            return 1;
        }
    }

    cout << canJump(nums) << endl;

    return 0;
}
// Greedy approach

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int max_reachable = 0;

    for (int i = 0; i < n; i++) {
        if (i > max_reachable) {
            return false;
        }
        max_reachable = max(max_reachable, i + nums[i]);
        if (max_reachable >= n - 1) {
            return true;
        }
    }

    return false;
}
// Time complexity: O(n)
// Space complexity: O(1)