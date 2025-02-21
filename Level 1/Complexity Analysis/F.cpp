#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, cnt0=0;
    string s;
    cin >> n >> s;
    for (char c:s) if (c=='0') ++cnt0;
    ll sz = s.size();
    cout << abs(sz-2*cnt0) << '\n';
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;  //cin >> t;
    while (t--) solve(); return 0;
}
