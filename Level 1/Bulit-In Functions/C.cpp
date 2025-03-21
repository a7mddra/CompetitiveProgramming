#include "bits/stdc++.h"
using namespace std;

int main() {
    long long q, x, ans;
    bool flag = true;
    cin >> q;
    vector<int> arr;
    for (int i = 0 ; i < q ; i ++){
        cin >> x;
        arr.push_back(x);
    }
    cin >> ans;
    for (int i = q-1 ; i >= 0 ; i--) {
        if (ans == arr[i]) {
            flag = false;
        }
    }
    if (flag) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}
