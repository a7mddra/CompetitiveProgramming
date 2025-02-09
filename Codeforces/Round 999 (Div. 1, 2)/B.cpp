/*************************************************
 https://codeforces.com/problemset/problem/2061/B
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;
    sort(a.begin(), a.end());
    ll s = 0;
    n--;
    for (ll i=0; i<n; ++i) {
        if (a[i] == a[i + 1]) {
            s = a[i];
            a.erase(a.begin()+i, a.begin()+i+2);
            n-=2;
            break;
        }
    }
    if (s==0) {
        cout<<-1<<'\n';
        return;
    }
    for (ll i=0; i<n; ++i) {
        if (s*2+a[i]>a[i+1]) {
            cout<<s<<" "<<s<<" "<<a[i]<<" "<<a[i+1]<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
