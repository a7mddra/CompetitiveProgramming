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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll&i:a) cin >> i;
    if (n==1) {cout << -1 << el; return;}
    unordered_map<ll,ll> mp;
    ll ans=n+1;
    for (ll i=0; i<n; ++i) {
        if (mp.count(a[i]))  ans = min(ans, i-mp[a[i]]+1);
        mp[a[i]]=i;
    }
    cout << (ans==n+1?-1:ans) << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
