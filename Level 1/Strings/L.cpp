#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    while(n--) {
        cin >> str;
        if (str.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }
        sort(str.begin(), str.end());
        bool flag = false;
        for (int i = 0 ; i < str.size() - 1 ; i++) {
            if (str[i + 1] - str[i] != 1) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
