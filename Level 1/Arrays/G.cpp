#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int *magnets = new int[k];
    int counter = 1;

    for (int z = 0; z < k; ++z){
        cin >> magnets[z];
    }

    for (int i = 1; i < k; ++i){
        if(magnets[i] != magnets[i - 1]){
            counter++;
        }
    }

    cout << counter << endl;

    delete[] magnets;
    return 0;
}
