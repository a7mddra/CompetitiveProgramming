/**********************************************
 https://codeforces.com/contest/2044/problem/F
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve() {
    ll n, m, q, x, f;
    cin >> n >> m >> q;
    vector<ll> a(n), b(m);
    unordered_set<ll> A, B;

    for (ll &e : a) cin >> e;
    for (ll &e : b) cin >> e;

    ll sa = accumulate(a.begin(), a.end(), 0LL);
    ll sb = accumulate(b.begin(), b.end(), 0LL);

    for (ll x : a) A.insert(x);
    for (ll x : b) B.insert(x);

    while (q--) {
        cin >> x;
        f = 0;
        
        for (ll i = 1; i * i <= abs(x); ++i) {
            if (x % i != 0) continue;
            ll d = x / i;
    
            vector<pair<ll, ll>> pairs = {{i, d}, {d, i}, {-i, -d}, {-d, -i}};
            for (auto [p, q] : pairs) {
                if (abs(sa - p) <= n && abs(sb - q) <= m && A.count(sa - p) && B.count(sb - q)) {
                    f = 1;
                    break;
                }
            }
            if (f) break;
        }

        cout << (f ? "YES" : "NO") << '\n';
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
