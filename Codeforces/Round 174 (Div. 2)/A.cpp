/**********************************************
 https://codeforces.com/contest/2069/problem/A
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    n-=2;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;
    for (ll i=0; i<n-2; ++i) {
        if (a[i]==1&&a[i+1]==0&&a[i+2]==1)
        {cout << "nO\n";
        return;}
    }
    cout << "yES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
