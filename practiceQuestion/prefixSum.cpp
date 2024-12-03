#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

vector<int> findPrefixSums(vi &a) {
    int n = a.size();
    vector<int> prefixSums(n + 1, 0);

    for (int i = 0; i < n; i++) { 
        prefixSums[i + 1] = prefixSums[i] + a[i];
    }

    return prefixSums;
}

int main() {
    ifstream infile("in.txt");  // Open input file
    ofstream outfile("out.txt"); // Open output file

    int T; // Number of test cases
    infile >> T;
    
    for (int t = 1; t <= T; t++) {
        int N; // Size of the array for each test case
        infile >> N;

        vi a(N);  // Array to store elements
        for (int i = 0; i < N; i++) {
            infile >> a[i];  // Read array elements
        }

        // Calculate prefix sums
        vi result = findPrefixSums(a);

        // Write the result to the output file
        outfile << "Case #" << t << ": ";
        for (int i = 0; i < result.size(); i++) {
            outfile << result[i] << " ";
        }
        outfile << endl;
    }

    infile.close();  // Close input file
    outfile.close(); // Close output file

    return 0;
}

