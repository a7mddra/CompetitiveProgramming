#include "bits/stdc++.h"
using namespace std;

int main() {
    long long q, x, ans=0;
    cin >> q;
    vector<int> arr;
    for (int i = 0 ; i < q ; i ++){
        cin >> x;
        arr.push_back(x);
    }
    for (int i = q-1 ; i >= 0 ; i--) {
        ans += arr[i];
    }
    cout <<ans;
    return 0;
}
