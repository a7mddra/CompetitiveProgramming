#include <iostream>
using namespace std;

int main() {
    int k, a, b, c;
    int x = 0;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c;
        if (a+b+c >= 2) {
            x++;
        }
    }

    cout << x << endl;

    return 0;
}
