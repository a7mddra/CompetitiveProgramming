#include "bits/stdc++.h"
#define ll long long
#define vec vector
using namespace std;

bool check(const string& s, const vec<ll>& a, ll x, ll k, ll n) {
    ll cnt = 0;          
    bool pall = false; 
    for (ll i = 0; i < n; ++i) {
        if (s[i] == 'R' && a[i] > x) { 
            if (pall) {
                cnt++;         
                pall = false;
            }
        } else {
            if (s[i] == 'B' && a[i] > x) { 
                pall = true;
            }
        }
    }
    if (pall) {
        cnt++; 
    }
    return cnt <= k;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vec<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    ll lo = 0, hi = 1e18;     
    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;
        if (check(s, a, mid, k, n)) {
            hi = mid; 
        } else {
            lo = mid + 1; 
        }
    }
    cout << lo << '\n';     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
