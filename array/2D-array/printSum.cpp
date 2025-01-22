#include<bits/stdc++.h>
using namespace std;


// print row -wise sum of 2D array
void printSum(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " is: " << sum << endl;
    }
}

// print column -wise sum of 2D array
void printColSum(int arr[][3], int row, int col) {
    for(int i = 0; i < col; i++) {
        int sum = 0;
        for(int j = 0; j < row; j++) {
            sum += arr[j][i];
        }
        cout << "Sum of column " << i << " is: " << sum << endl;
    }
}

// largest row sum
int largestRowSum(int arr[][3], int n, int m){
    int maximum = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row < n; row++) {
        int sum = 0;
        for(int col = 0; col < m; col++) {
            sum += arr[row][col];
        }
        // maximum = max(maximum, sum);
        if(sum > maximum) {
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "Largest row sum is: " << maximum  << endl;
    return n;
}

int main() {
    int arr[3][3]; // creating a 2D array of 3 rows and 4 columns


    cout << "Enter the elements of the 2D array: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];     // taking input from user
        }
    }

    cout << "The 2D array is: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";  // printing the 2D array
        }
        cout << endl;
    }

    // print row-wise sum of 2D array
    //printSum(arr, 3, 3);

    // print column-wise sum of 2D array
    //printColSum(arr, 3, 3);

    // largest row sum
    cout << "max sum is at index" << largestRowSum(arr, 3, 3);

    return 0;
}