#include <iostream>
using namespace std;

int main() {
    int a, b;
    int x = 0;
    cin >> a >> b;
    
    for (int i = 0; i < 100; i++) {
        a = a * 3;
        b = b * 2;
        x++;
        if (a>b) {
            break;
        }
    }

    cout << x << endl;

    return 0;
}
