#include <iostream>

using namespace std;

int main() {
    int n;
    int v[] = {4, 7, 47, 74, 447, 474, 744, 774, 747, 477, 444, 777};
    cin >> n;

    for (int i = 0; i < 12; ++i) {
        if (n % v[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
