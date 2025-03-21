#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;

    long long x = (long long)ceil((double)n / a) * (long long)ceil((double)m / a);

    cout << x << endl;

    return 0;
}
