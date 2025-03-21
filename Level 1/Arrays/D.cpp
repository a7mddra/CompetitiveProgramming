#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;

    int values[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> values[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if(values[i][j] == 1){
                cout<<(abs(i-2) + abs(j-2))<<endl;
            }
        }
    }

    return 0;
}
