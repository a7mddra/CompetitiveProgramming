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
    ll n, m, sum=0, ans=0, i=0;
    cin >> n >> m;
    ll a[n];
    for (ll&j:a) cin >> j;
    sort(a, a+n);
    while (sum<=m) {
        sum+=a[i];
        ++ans;++i;
    }cout << ans-1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1;// cin >> T;
    while (T--) solve();
    return 0;
}
