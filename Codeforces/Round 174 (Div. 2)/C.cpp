/**********************************************
 https://codeforces.com/contest/2069/problem/C
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll MOD = 998244353;

ll pm(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<ll> cnt2(n + 1, 0);
    for (ll i = 0; i < n; ++i) {
        cnt2[i + 1] = cnt2[i] + (a[i] == 2);
    }

    vector<ll> cnt1(n + 1, 0);
    for (ll i = 0; i < n; ++i) {
        cnt1[i + 1] = cnt1[i] + (a[i] == 1);
    }

    ll max_cnt = cnt2.back();
    vector<ll> pow2(max_cnt + 1, 1);
    for (ll i = 1; i <= max_cnt; ++i) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    ll inv_2 = pm(2, MOD - 2, MOD);
    vector<ll> ln2(max_cnt + 1, 1);
    for (ll i = 1; i <= max_cnt; ++i) {
        ln2[i] = (ln2[i - 1] * inv_2) % MOD;
    }

    vector<ll> insum(n + 1, 0);
    for (ll i = 0; i < n; ++i) {
        insum[i + 1] = insum[i];
        if (a[i] == 1) {
            ll m = cnt2[i + 1];
            insum[i + 1] = (insum[i + 1] + ln2[m]) % MOD;
        }
    }

    ll ans = 0;
    for (ll k = 0; k < n; ++k) {
        if (a[k] != 3) continue;
        if (k == 0) continue;
        ll ccnt2 = cnt2[k];
        ll insum_ = insum[k];
        ll pow2_ = pow2[ccnt2];
        ll term = (pow2_ * insum_ % MOD - cnt1[k] + MOD) % MOD;
        ans = (ans + term) % MOD;
    }

    cout << ans % MOD << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
