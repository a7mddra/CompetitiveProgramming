#include <iostream>
using namespace std;

int main() {
    int n, a, b, c = 0;
    cin >> n;
    int v[n-1]; 

    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
    }

    cin >> a >> b;

    a--;
    b--;

    for (int i = a; i < b; i++) {
        c += v[i];
    }

    cout << c << endl;
    return 0;
}

