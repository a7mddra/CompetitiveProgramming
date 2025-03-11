#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353

typedef long long ll;

ll modPow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    
    int count_1 = count(s.begin(), s.end(), '1');
    ll pow_2_4;
    
    if (n >= 4) {
        pow_2_4 = modPow(2, n - 4, MOD);
    } else {
        ll inv_exponent = 4 - n;
        ll inv_val = modPow(2, inv_exponent, MOD);
        pow_2_4 = modPow(inv_val, MOD - 2, MOD);
    }
    
    while (q--) {
        int i;
        cin >> i;
        --i;
        
        if (s[i] == '1') {
            count_1--;
            s[i] = '0';
        } else {
            count_1++;
            s[i] = '1';
        }
        
        ll sum_x = 2 * count_1 - n;
        ll sum_x_sq = (sum_x * sum_x) % MOD;
        ll temp = (sum_x_sq + (n - 2)) % MOD;
        ll ans = (pow_2_4 * temp) % MOD;
        
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

