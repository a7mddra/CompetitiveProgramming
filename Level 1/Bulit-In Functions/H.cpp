#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int i=0;
    int j=s.size();
    while(j) {
        j--;
        if (s[i] == t[j]) {
            i++;
        }
    }
    if (i == s.size()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}

