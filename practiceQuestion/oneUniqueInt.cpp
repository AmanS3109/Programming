#include <bits/stdc++.h>
using namespace std;

// given list of IDs, which contains many duplicate integers and one unique integer, find the unique integer
// O(n^2) solution brute force

int findUnique(vector<int>& ids) {
    for (int i = 0; i < ids.size(); i++) {
        int count = 0;
        for (int j = 0; j < ids.size(); j++) {
            if (ids[i] == ids[j]) {
                count++;
            }
        }
        if (count == 1) {
            return ids[i];
        }
    }
    return -1;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> ids(n);
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    cout << findUnique(ids) << endl;

    return 0;
}

// O(n) solution using hashmap

int findUnique(vector<int>& ids) {
    unordered_map<int, int> count;
    for (int i = 0; i < ids.size(); i++) {
        count[ids[i]]++;
    }
    for (auto it : count) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return -1;
}

// O(n) solution using XOR

int findUnique(vector<int>& ids) {
    int result = 0;
    for (int i = 0; i < ids.size(); i++) {
        result ^= ids[i];
    }
    return result;
}