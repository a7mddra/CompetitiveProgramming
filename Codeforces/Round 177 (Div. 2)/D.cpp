/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
const ll INF = 1e18;
const ll MOD = 998244353;
const ll MAX = 5e5; 
string el = "\n";

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

vector<ll> fact(MAX + 2);
vector<ll> inv_fact(MAX + 2);

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll MODInverse(ll n) {
    return power(n, MOD - 2);
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAX + 1; i++) { 
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    inv_fact[MAX + 1] = MODInverse(fact[MAX + 1]); 
    inv_fact[MAX] = MODInverse(fact[MAX]); 

    
    for (int i = MAX - 1; i >= 0; i--) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}

void solve() {
    vector<ll> c(26);
    ll sum_c = 0;
    for (int i = 0; i < 26; ++i) {
        cin >> c[i];
        sum_c += c[i];
    }

    if (sum_c == 0) {
        cout << 0 << el;
        return;
    }
    
    ll total_even = (sum_c + 1) / 2;
    ll total_odd = sum_c / 2;

    ll sum_forced_in = 0; 
    vector<ll> optional;
    bool possible = true;

    for (ll ci : c) {
        if (ci == 0) {
            continue;
        }
        if (ci > total_odd) {
            
            if (ci > total_even) {
                possible = false; 
                break;
            }
            sum_forced_in += ci; 
        }
        else if (ci > total_even) { 
        }
        
        else {
            optional.push_back(ci);
        }
    }
    if (!possible) {
        cout << 0 << el;
        return;
    }
    if (sum_forced_in > total_even) {
        cout << 0 << el;
        return;
    }
    ll rem = total_even - sum_forced_in;
    if (rem < 0) {
         cout << 0 << el; 
         return;
    }
    ll sum_optional = 0;
    for(ll val : optional) {
        sum_optional += val;
    }
    if (sum_optional < rem) {
        cout << 0 << el;
        return;
    }
    ll k = 0;
    if (rem == 0) {
        k = 1;
    } else {
        vector<ll> dp(rem + 1, 0);
        dp[0] = 1; 

        for (ll ci : optional) {
            if (ci == 0) continue; 
            
            for (ll s = rem; s >= ci; --s) {
                dp[s] = (dp[s] + dp[s - ci]) % MOD;
            }
        }
        k = dp[rem];
    }
    if (k == 0) {
        cout << 0 << el;
        return;
    }
    ll product_inv = 1;
    for (ll ci : c) {
        if (ci > 0) {
            if (ci >= inv_fact.size()) {
                 product_inv = (product_inv * MODInverse(fact[ci])) % MOD;
            } else {
                 product_inv = (product_inv * inv_fact[ci]) % MOD;
            }
        }
    }
    ll even_fact = fact[total_even];
    ll odd_fact = fact[total_odd];
    ll ans = (even_fact*odd_fact)% MOD;
    ans = (ans*product_inv)% MOD;
    ans = (ans*k)%MOD;
    cout << ans << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    precompute();    
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
