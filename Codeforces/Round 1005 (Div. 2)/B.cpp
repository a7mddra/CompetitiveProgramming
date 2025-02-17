/**********************************************
 https://codeforces.com/contest/2064/problem/B
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> oc;
    for (ll i=0; i<n; ++i) {
        cin >> a[i];
        ++oc[a[i]];
    }
    ll mxlen=0, l=-1, r;
    for (ll i=0; i<n; ++i) {
        if (oc[a[i]]>1) continue;
        ll j;
        for (j=i; j<n&&oc[a[j]]<2; ++j);
        --j;
        if (j-i+1>mxlen) {
            mxlen = j-i+1;
            l=i;
            r=j;
        }
        i=j;
    }
    cout << l+1;
    if (~l) 
        cout << " " << r+1;
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
