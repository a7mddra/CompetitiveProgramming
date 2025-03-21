#include <iostream>
using namespace std;

int main() {
    int k, a, b;
    int c = 0;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        if (b - a >= 2) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
