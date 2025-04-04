/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
const ll INF = 1e18;
string el = "\n";

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> s(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        s[i] = s[i-1] + a[i];
    }
    ll max_s = *max_element(s.begin() + 1, s.end());

    vector<ll> max_suff(n + 1);
    max_suff[n] = s[n];
    for (int i = n - 1; i >= 1; i--)
        max_suff[i] = max(max_suff[i + 1], s[i]);

    vector<ll> local_max(n + 1);
    for (int q = 1; q <= n; q++)
        local_max[q] = max_suff[q] - s[q - 1];
    ll ans = 0;
    for (int q = 1; q <= n; q++) {
        if (local_max[q] >= x) {
            ans += k;
        } else if (s[n] > 0) {
            ll diff = max_s-s[q-1];
            if (diff >= x) {
                ans += k;
            } else {
                ll c = x-diff;
                if (c>0) {
                    ll cil = (c + s[n]- 1) / s[n];
                    ll m_max = k-1-cil;
                    if (m_max>= 0) {
                        ans+=min(m_max+1, k);
                    }
                }
            }
        }
    }
    cout << ans << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
