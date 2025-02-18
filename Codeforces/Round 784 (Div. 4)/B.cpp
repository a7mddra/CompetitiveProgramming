/**********************************************
 https://codeforces.com/contest/1669/problem/B
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    map<int, int> f;
    for (ll i=0; i<n; ++i) {
        cin >> a[i];
        ++f[a[i]];
    }bool ff=false;
    for (ll i=0; i<n; ++i) {
        if (f[a[i]]>2) {cout << a[i] << " ";ff=true;break;}
    }if(!ff)cout<<-1;
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
