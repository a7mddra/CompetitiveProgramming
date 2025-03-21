#include <iostream>
using namespace std;

int main() {
    int N;
    int C = 0;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        C += i;
    }

    cout << C << endl;

    return 0;
}
