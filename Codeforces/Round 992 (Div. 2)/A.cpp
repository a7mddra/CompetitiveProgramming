/**********************************************
 https://codeforces.com/contest/2040/problem/A
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll& e : a) cin >> e;
    for (ll i=0; i<n; ++i) {
        bool f=true;
        for (ll j=0; j<n; ++j) {
            if (i==j) continue;
            if (abs(a[i]-a[j])%k==0){
                f=false;
                break;
            } 
        }
        if (f) {
            cout << "yEs\n" << i+1 << '\n';
            return;
        }
    }
    cout << "nO" << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
