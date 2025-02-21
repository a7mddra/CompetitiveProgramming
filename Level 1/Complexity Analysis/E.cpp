#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = n*(n+1)/2;
    ll a=1;
    while (a<=n) {
        ans-= 2*a;
        a*=2;
    } cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
