/**********************************************
 https://codeforces.com/contest/2064/problem/A
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, ans=0;
    string s;
    cin >> n >> s;
    for (ll i=1; i<n; ++i)
        ans += (s[i-1]!=s[i]);
    cout << ans + (s[0]&1) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
