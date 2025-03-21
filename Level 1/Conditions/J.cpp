#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long result;
    if (m <= (n + 1) / 2) {
        result = 2 * m - 1;
    } else {
        result = 2 * (m - (n + 1) / 2);
    }

    cout << result << endl;

    return 0;
}
