/*************************************************
 https://codeforces.com/problemset/problem/2031/A
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, cnt=0, ans=0;
    cin >> n;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;
    for (ll i=1; i<n; ++i) {
        if (a[i]>=a[i-1]) ++cnt;
        else{ ans = max(ans, cnt);cnt=0;}
    }
    cout << n-max(cnt, ans)-1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
