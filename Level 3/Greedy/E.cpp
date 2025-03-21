/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
string el = "\n";

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

void solve()
{
    string s;
    bool ok=false;
    cin >> s;
    for (ll i=0; i<s.size()-1; ++i) {
        char c=s[i];
        if (c=='1') cout << c;
        if (c=='0'&&ok) cout << c;
        if (c=='0') ok=true;
    } if(ok) cout << s[s.size()-1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
