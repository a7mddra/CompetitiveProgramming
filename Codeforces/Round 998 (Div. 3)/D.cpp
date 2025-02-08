/*************************************************
 https://codeforces.com/problemset/problem/2060/D
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, f=0;
    cin >> n;
    vector<ll> b(n);
    for (ll& e : b) cin >> e;
    for (ll i=1; i<n; ++i) {
        if (b[i]<b[i-1]) {
            f=1;
            break;
        } else b[i]-=b[i-1];
    }
    cout << (f==1?"nO":"yES") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
