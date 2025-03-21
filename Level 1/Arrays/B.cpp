#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; ++i) {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            matrix[j][i] = matrix[j-1][i] + matrix[j][i-1];
            }
    }

    cout<<matrix[n-1][n-1]<<endl;
    
    return 0;
}
