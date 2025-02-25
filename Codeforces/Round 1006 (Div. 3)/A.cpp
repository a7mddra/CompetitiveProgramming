#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k, p;
    cin >> n >> k >> p;
    if (k==0) {
        cout<<0<<'\n';
        return;
    }
    k = abs(k);
    ll ans = (k+p-1)/p;
    cout << (ans<=n?ans:-1) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
