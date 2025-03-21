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
    ll n, ans=0;
    cin >> n;
    vector<ll> a(n);
    for (ll& i:a) cin >> i;
    sort(a.begin(), a.end());
    for (ll i=0; i<n; ++i)
    ans += abs(a[i]-i-1);
    cout << ans << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
