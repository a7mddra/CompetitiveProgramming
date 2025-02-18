/**********************************************
 https://codeforces.com/contest/2069/problem/B
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    map<ll, vector<pair<ll, ll>>> clr;
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            clr[grid[i][j]].push_back({i, j});
        }
    }

    if (clr.size() == 1) {
        cout << 0 << '\n';
        return;
    }

    map<ll, bool> adj;
    for (auto const& [color, cells] : clr) {
        set<pair<ll, ll>> cell_set(cells.begin(), cells.end());
        bool strng = false;
        for (auto const& [i, j] : cells) {
            if (cell_set.count({i + 1, j})) {
                strng = true;
                break;
            }
            if (cell_set.count({i, j + 1})) {
                strng = true;
                break;
            }
        }
        adj[color] = strng;
    }

    ll sum = 0;
    map<ll, ll> steps;
    for (auto const& [color, cells] : clr) {
        ll s = adj[color] ? 2 : 1;
        steps[color] = s;
        sum += s;
    }

    ll ans = sum;
    for (auto const& [color, cells] : clr) {
        ll current = sum - steps[color];
        ans = min(ans, current);
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
