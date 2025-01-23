// Consider an algorithm that takes as input a positive integer n. 
//If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. 
//The algorithm repeats this, until n is one.

#include <bits/stdc++.h>
using namespace std;

void weird(int n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2; // If n is even, divide it by 2
        } else {
            n = n * 3 + 1; // If n is odd, multiply by 3 and add 1
        }
    }
    cout << 1 << "\n"; // Print 1 at the end of the sequence
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n; // Read input from in.txt
    weird(n); // Generate the sequence and output it to out.txt
    return 0;
}
