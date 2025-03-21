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
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (ll& i:a) cin >> i;
    for (ll i=d%n; i<n; ++i) cout << a[i] << " ";
    for (ll i=0; i<d%n; ++i) cout << a[i] << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
