#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }    
    return 0;
}
