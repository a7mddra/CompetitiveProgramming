/**********************************************
 https://codeforces.com/contest/2064/problem/C
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
   ll n, ans=0;
   cin >> n;
   vector<ll> a(n), pf(n+1), sf(n+1);
   for (ll i=0; i<n; ++i) {
       cin >> a[i];
       pf[i+1] = pf[i] + (a[i]>0?a[i]:0);
   }
   for (ll i=n-1; ~i; --i) {
       sf[i] = sf[i+1] + (a[i]<0?-a[i]:0);
   }
   for (ll i=n; ~i; --i) {
       ans = max(ans, pf[i]+sf[i]);
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
