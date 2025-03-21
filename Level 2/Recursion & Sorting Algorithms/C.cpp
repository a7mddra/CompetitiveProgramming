#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, s, d, x, y;
    cin >> n >> s >> d;
    string ans="No";
    for (ll i=0; i<n; ++i) {
        cin >> x >> y;
        if (x<s&&y>d) ans="Yes";
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;// cin >> t;
    while (t--) solve(); return 0;
}
