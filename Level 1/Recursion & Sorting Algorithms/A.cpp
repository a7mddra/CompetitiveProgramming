#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve(ll j)
{
    ll n, e, cnt=0;
    cin >> n;
    for (ll i=0; i<n; ++i) {
        cin >> e;
        cnt += e;
    }
    cout << "Case " <<j<<": "<<cnt<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    ll i=0;
    while (i<t) solve(i+1), ++i; return 0;
}
