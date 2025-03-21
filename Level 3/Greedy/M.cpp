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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll&i:a) cin >>i;
    for (ll i=0; i<n && k>0; ++i) {
        ll op = min(a[i], k);
        a[i]-=op;
        a[n-1]+=op;
        k-=op; }
    for (ll&i:a) cout << i << " ";
    cout << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
