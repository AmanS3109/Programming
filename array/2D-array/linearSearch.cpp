#include<bits/stdc++.h>
using namespace std;

// Linear Search
bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

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

    // Linear Search
    cout << "Enter the element to search: " << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}