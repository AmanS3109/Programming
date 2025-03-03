#include <bits/stdc++.h>
using namespace std;

bool check(int n, int c, vector <int> stalls, int mid){
    int cowCount = 1;
    int lastCowPosition = stalls[0];

    for (int i = 1; i < n; i++){
        if ((stalls[i] - lastCowPosition) >= mid){
            cowCount++;
            lastCowPosition = stalls[i];
        }
    }

    if (cowCount < c){
        return false;
    }
    return true;
}

void solve(){
    int n, c;
    cin >> n >> c;

    vector <int> stalls(n);
    for (int i = 0; i < n; i++){
        cin >> stalls[i];
    }
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if(check(n, c, stalls, mid)){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}