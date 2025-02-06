/**********************************************
 https://codeforces.com/contest/2044/problem/F
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, m, q, x;
    cin >> n >> m >> q;
    vector<ll> a(n), b(m);

    for (ll& e : a) cin >> e;
    for (ll& e : b) cin >> e;

    ll suma = accumulate(a.begin(), a.end(), 0LL);
    ll sumb = accumulate(b.begin(), b.end(), 0LL);
    ll sum  = suma * sumb;
    
    unordered_set<ll> sums;
    
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            ll si = sum - (sumb * a[i]) - (suma * b[j]) + (a[i] * b[j]);
            sums.insert(si);
        }
    }

    for (ll i = 0; i < q; ++i) {
        cin >> x;
        cout << (sums.count(x) ? "yEs" : "nO") << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;  // cin >> t;
    while (t--) solve(); 
    return 0;
}
