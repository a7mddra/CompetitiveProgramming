#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, x, sum=0;
    cin >> n;
    vector<ll> a(n);
    for (ll i=0; i<n; ++i) {
        cin>> a[i];
    }
    cin >> x;
    for (ll i=0; i<n; ++i) {
        sum+=a[i];
        if (x<sum) {
            cout << i+1;
            return;
        }
    }
    ll rnd=x/sum;
    ll i=rnd*n;
    sum*=rnd;
    ll rem=x-sum;
    sum=0;
    for (ll j=0; j<n; ++j) {
        sum+=a[j];
        ++i;
        if (sum>rem) break;
    }
    cout << i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;//  cin >> t;
    while (t--) solve(); return 0;
}
