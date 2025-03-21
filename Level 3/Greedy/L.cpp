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
    vector<ll> a(n), p(n+1, 0), res;
    for (ll& i:a) cin >> i;
    for (ll i=1; i<=n; ++i) p[i] = p[i-1]+a[i-1];
    set<pair<ll, pair<ll, ll>>> s;
    s.insert({-(p[n] - p[0]), {0, n-1}});
    while(res.size()<k&&!s.empty()) {
        auto it = s.begin();
        ll sum = -it -> first;
        ll l = it -> second.first;
        ll r = it -> second.second;
        res.push_back(sum);
        s.erase(it);
        if (l<r) {
            s.insert({-(p[r+1]-p[l+1]), {l+1, r}});
            s.insert({-(p[r]-p[l]), {l, r-1}});
        }
    }
    for (ll& i:res) cout << i << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
