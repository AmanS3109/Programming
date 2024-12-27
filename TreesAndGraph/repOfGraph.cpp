#include <bits/stdc++.h>
using namespace std;

// Adjacency List Representation
const int N = 100005;
vector<pair<int, int>> graph[N];
int main(){
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }
    for(int i = 1; i <= N; i++){
        cout << i << " -> ";
        for(auto x: graph[i]){
            cout << x.first << " " << x.second << ", ";
        }
        cout << endl;
    }
    return 0;
}

// Adjacency Matrix Representation
const int N = 1005;
int graph[N][N];
int main(){
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1][v2] = wt;
        graph[v2][v1] = wt;
    }
    for(int i = 1; i <= N; i++){
        cout << i << " -> ";
        for(int j = 1; j <= N; j++){
            if(graph[i][j] != 0){
                cout << j << " " << graph[i][j] << ", ";
            }
        }
        cout << endl;
    }
    return 0;
}