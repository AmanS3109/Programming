#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    a.push_back(INT_MAX);
    b.push_back(INT_MAX);

    int i = 0, j = 0, k = 0;
    vector<int> c(n + m);
    while (i < a.size() || j < b.size()) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}