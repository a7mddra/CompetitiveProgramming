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
    ll n, d=-1;
    string s;
    cin >> n >> s;
    for (char c:s) {
        if (c=='1') {
            if (d!=2) {
                cout << 1;
                d=2;
            } else {
                cout << 0;
                d=1;
            }
        } else {
            if (d!=1) {
                cout << 1;
                d=1;
            } else {
                cout << 0;
                d=0;
            }
        }
    } cout << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
