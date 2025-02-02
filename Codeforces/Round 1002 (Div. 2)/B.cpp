/**********************************************
 https://codeforces.com/contest/2059/problem/B
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

ll calc(vector<ll>& a, ll bd, ll inc, ll st) {
    for (ll i = 2; i <= bd; i += inc) if (a[i] != (st == 0 ? i*0.5 : 1)) return (st == 0 ? i*0.5 : i);
    return -1e9;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; ++i) cin >> a[i];
    if (n-k==0) cout << (calc(a, n, 2, 0) == -1e9 ? n*0.5+1 : calc(a, n, 2, 0)) << '\n';
    else {
        ll idx = calc(a, n-k+2, 1, 1);
        ll res=1;
        if (idx == -1e9) {
            res++;
            for (ll i = n-k+1; i <= n; i += 2) {
                if (a[i] != res) break;
                res++;
            }
        }
        cout << res << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
