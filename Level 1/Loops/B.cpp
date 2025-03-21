#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> C = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<int> positions(26);
    
    for (int i = 0; i < 26; ++i) {
        cin >> positions[i];
    }

    for (int i = 0; i < 26; ++i) {
        cout << C[positions[i] - 1];
    }
    cout << endl;

    return 0;
}
