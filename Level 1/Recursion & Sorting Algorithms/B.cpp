#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, ans=0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll& e:a) cin >> e;
    for (ll& e:b) cin >> e;
    for (ll i=0; i<n; ++i)  ans += a[i]*b[i];
    cout << (ans==0?"Yes":"No") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;// cin >> t;
    while (t--) solve(); return 0;
}
