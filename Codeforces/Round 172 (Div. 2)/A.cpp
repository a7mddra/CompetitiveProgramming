/*************************************************
 https://codeforces.com/problemset/problem/2042/A
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;
    sort(a.begin(), a.end());
    for (ll i=n-1; i>-1; --i) {
        if (k>a[i]||k==a[i]) k-=a[i];
        else break;
    }
    cout << k << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
