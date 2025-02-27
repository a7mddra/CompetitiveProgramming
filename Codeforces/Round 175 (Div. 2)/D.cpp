#include "bits/stdc++.h"
#define ll long long
#define vec vector
const ll MOD = 998244353;
using namespace std;


pair<vec<vec<ll>>, vec<ll>> bfs_lvls(ll n, const vec<vec<ll>>& adj, ll root) {
    vec<ll> lvl(n + 1, 0);
    vec<ll> prt(n + 1, 0);
    queue<ll> q;
    lvl[root] = 0;
    prt[root] = -1;
    vec<vec<ll>> lvls(n + 1);
    ll max_lvl = 0;

    q.push(root);
    while (!q.empty()) {
        ll v = q.front();
        q.pop();
        lvls[lvl[v]].push_back(v);
        max_lvl = max(max_lvl, lvl[v]);
        for (ll u : adj[v]) {
            if (lvl[u] == 0 && u != root) {
                lvl[u] = lvl[v] + 1;
                prt[u] = v;
                q.push(u);
            }
        }
    }
    return {lvls, prt};
}

ll cnt(ll n, const vec<vec<ll>>& adj) {
    auto [lvls, prt] = bfs_lvls(n, adj, 1);
    vec<ll> dp(n + 1, 0);
    dp[1] = 1;
    ll total = 1;
    ll S_prev = 1;
    ll h = 0;
    for(ll i = 0; i <= n; i++){
        if(lvls[i].size() > 0){
            h = i;
        }
    }
    for (ll k = 1; k <= h; ++k) {
        ll S_k = 0;
        if (k == 1) {
            for (ll v : lvls[k]) {
                dp[v] = 1;
                S_k = (S_k + dp[v]) % MOD;
            }
        } else {
            for (ll v : lvls[k]) {
                dp[v] = (S_prev - dp[prt[v]] + MOD) % MOD;
                S_k = (S_k + dp[v]) % MOD;
            }
        }
        total = (total + S_k) % MOD;
        S_prev = S_k;
    }
    return total;
}

void solve()
{
    ll n;
    cin >> n;
    vec<ll> p(n - 1);
    for (ll i = 0; i < n - 1; ++i) cin >> p[i];
    vec<vec<ll>> adj(n + 1);
    for (ll i = 2; i <= n; ++i) {
        adj[p[i - 2]].push_back(i);
        adj[i].push_back(p[i - 2]);
    }
    ll res = cnt(n, adj);
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
