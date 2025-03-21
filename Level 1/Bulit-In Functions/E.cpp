#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[n];
    memset (arr, 0, sizeof(arr));
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        arr[x-1]++;
    }
    for (int i = 0 ; i < n ; i++) {
        cout << i + 1 << ": " << arr[i] << endl;
    }    
    return 0;
}
