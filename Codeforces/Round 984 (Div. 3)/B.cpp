/*************************************************
 https://codeforces.com/problemset/problem/2036/B
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k, bi, ci;
    cin >> n >> k;
    unordered_map<ll, ll> mp;
    for (ll i=0; i<k; ++i) {
        cin >> bi >> ci;
        mp[bi]+=ci;
    }
    vector<ll> a;
    for (auto &[b, c] : mp) {
        a.push_back(c);
    }
    sort(a.begin(), a.end(), greater<ll>());
    for (ll i=1; i<min(n, (ll)a.size()); ++i) {
        a[0] += a[i];
    }
    cout << a[0] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
