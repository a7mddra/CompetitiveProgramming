#include "bits/stdc++.h"
using namespace std;

int main() {
    int q, x;
    cin >> q;
    vector<int> arr;
    for (int i = 0 ; i < q ; i ++){
        cin >> x;
        arr.push_back(x);
    }
    for (int i = q-1 ; i >= 0 ; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
