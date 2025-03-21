#include <iostream>

using namespace std;

int main() {
    long long int n, x, y;
    cin >> n;

    long long int v[n]; 

    for (long long int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cin >> x >> y;

    for (long long int i = x - 1; i <= y - 1; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
