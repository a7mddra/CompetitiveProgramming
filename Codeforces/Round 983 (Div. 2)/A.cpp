#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, a, z=0, o=0;
    cin >> n;
    for (ll i=0; i<2*n; ++i) {
        cin >> a;
        a>0?++o:++z;
    }
    cout << o%2 << " " << min(o, z) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
