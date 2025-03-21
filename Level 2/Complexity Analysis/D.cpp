#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, d;
    string ans="yEs";
    cin >> n >> d;
    vector<ll> a(n);
    for (ll i=0; i<n; ++i) {
        cin >> a[i];
        if (a[i]>d) ans="nO";
    }
    sort(a.begin(), a.end());
    cout << (a[0]+a[1]<=d?"yEs":ans) <<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
