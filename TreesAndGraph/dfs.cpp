//dfs in graph
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> graph[N];
bool visited[N];

void dfs(int node){
    visited[node] = true;
    cout << node << " ";
    for(int child: graph[node]){
        cout << "parent" << node << " " <<"child" << child << " " << endl;
        if (visited[child]) continue;
        dfs(child);
    }
}
int main(){
    // Redirect input and output
    freopen("input.txt", "r", stdin);  // Open input.txt for reading
    freopen("out.txt", "w", stdout);  // Open out.txt for writing

    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

     // Run DFS starting from node 1 (or any other node as per input)
    dfs(1);

    return 0;
}
