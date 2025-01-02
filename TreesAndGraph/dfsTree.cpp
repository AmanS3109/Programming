//dfs in tree

#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> tree[N];
int height[N];
int depth[N];

void dfs(int node, int parent=0){
    for(int child:tree[node]){
        if (child == parent) continue;
        depth[child] = depth[node] + 1;
        dfs(child, parent);
        height[node] = max(height[node], 1 + height[child]);
    }
}
int main(){
    // Redirect input and output
    freopen("input.txt", "r", stdin);  // Open input.txt for reading
    freopen("out.txt", "w", stdout);  // Open out.txt for writing

    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++){  // n-1 edges in a tree
        int v1, v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1); // Remove this line if the tree is directed
    }

     // Run DFS starting from node 1 (or any other node as per input)
    dfs(1);

    for(int i = 1; i <= n; i++){
        cout << i << " " << height[i] << " " << depth[i] << endl;
    }
}
