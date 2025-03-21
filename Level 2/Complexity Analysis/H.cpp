#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    cout << n-n%7+7*(n%7>n%10)<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve(); return 0;
}
