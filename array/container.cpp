#include <bits/stdc++.h>
using namespace std;

// Function prototype
int maxArea(vector<int>& height);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n = 100005;
    cin >> n;


    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
        if (height[i] < 0 || height[i] > 1e6) { // Validate height values
            cerr << "Invalid height value. Must be between 0 and 1e6." << endl;
            return 1;
        }
    }

    cout << maxArea(height) << endl;

    return 0;
}

int maxArea(vector<int>& height) {
    int n = height.size();
    int i = 0, j = n - 1;
    int max_area = 0;

    while (i < j) {
        int width = j - i;
        int min_height = min(height[i], height[j]);
        max_area = max(max_area, min_height * width);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }

    return max_area;
}
