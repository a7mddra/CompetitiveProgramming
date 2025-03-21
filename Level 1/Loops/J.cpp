#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int total_cubes = 0;
    int height = 0;

    for (int i = 1; total_cubes <= n; ++i) {
        total_cubes += i * (i + 1) / 2;
        if (total_cubes <= n) {
            height++;
        }
    }

    cout << height << endl;

    return 0;
}
