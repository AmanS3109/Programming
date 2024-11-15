#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vi  vector<int>
#define vll vector<long long int>

int reverSort(vi &arr){
    int cost = 0;
    int N = arr.size()-1;
    for (int i = 0; i < N; i++)
    {
        int m = *min_element(begin(arr) + i, end(arr));
        auto x = find(begin(arr), end(arr), m);
        reverse(arr.begin()+i, x+1); // reverse till we find the smallest element
        auto j = distance(begin(arr), x);
        cost += j - i + 1;
    }
    return cost;
    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    std::ios::sync_with_stdio(false);

    int T;  // testcases
    cin >> T;
    for (int c = 1; c < T+1; c++)
    {
        int N; // size of array
        cin >> N;
        vi arr;
        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        cout << "case #" << c << ":" <<reverSort(arr) << endl;
        
    }
    
}
