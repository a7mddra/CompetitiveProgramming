/*************************************************
 https://codeforces.com/problemset/problem/1650/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.size();
    char c;
    cin >> c;
    for (int i = 0 ; i < l ; i++) {
        if (s[i] == c && i%2==0 && (l-i-1)%2==0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    } return 0;
}
