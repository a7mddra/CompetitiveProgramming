#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll cntl = 0;
    for (ll i = n; i >= 0; i--) {     
        ll k=0;
        while(k<=n-i) {
            for (ll j = k; j <= i+k && i+k < n; j++) {
                !a[j]?cntl+=2:cntl++;
            }  
            
            k++;
        }
    }
    cout << cntl << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve(); return 0;
}
