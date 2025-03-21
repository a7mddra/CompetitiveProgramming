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
    ll n, e, B=0, C=0;
    cin >> n;
    for (ll i=0; i<n; ++i) {
        cin >> e;
        e<0?C+=e:B+=e;
    } cout << B-C << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
