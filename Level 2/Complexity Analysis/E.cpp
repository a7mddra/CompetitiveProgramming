#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s = n*(n+1)/2;
    ll k = log2(n) +1;
    ll p = pow(2, k) -1;
    cout << s-2*p <<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
