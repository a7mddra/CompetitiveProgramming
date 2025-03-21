#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 26) {
        cout << "NO";
        return 0;
    }
    string str;
    cin >> str;
    for (int i = 0 ; i < n ; i++) {
        str[i] = tolower(str[i]);
    }
    sort(str.begin(), str.end());
    for (int i = 0 ; i < n ; i++ ){
        if(str[i] == str[i+1]){
            str.erase(i+1,1);
            n--;
            i--;
        }
    }
    if (n < 26) {
        cout << "NO";
    }    
    else {
        cout << "YES";
    }
    return 0;
}
