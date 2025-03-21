#include <iostream>
using namespace std;

int main() {
    int k;
    int x = 0;
    cin >> k;
    string a;
    
    for (int i = 0; i < k; i++) {
        cin >> a;
        if (a == "++X" || a == "X++" ) {
            x++;
        }
        if (a == "--X" || a == "X--" ) {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
