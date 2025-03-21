#include <iostream>
using namespace std;

int main() {
    long long b;
    int k;
    cin >> b >> k;

    for(int i=0 ; i < k ; i++) {
        if (b % 10 == 0) {
            b = b /10;
        }
        else {
            b--;
        }
        
    }

    cout << b << endl;

    return 0;
}
