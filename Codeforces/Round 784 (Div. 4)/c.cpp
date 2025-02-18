/**********************************************
 https://codeforces.com/contest/1669/problem/C
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    bool ans=true, anss=true, ansss=true;
    for (ll i=0; i<n; ++i) {
        cin >> a[i];
        if(a[i]&1)ans=false;
        if(a[i]%2==0)anss=false;
        
    }
    for (ll i=1; i<n; ++i) {
        if(a[i]%2==a[i-1]%2){ansss=false;break;}
    }
    cout << ((ans||anss||ansss)?"yES":"nO") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
