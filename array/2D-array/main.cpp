#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4]; // creating a 2D array of 3 rows and 4 columns

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];     // taking input from user
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";  // printing the 2D array
        }
        cout << endl;
    }
    return 0;
}