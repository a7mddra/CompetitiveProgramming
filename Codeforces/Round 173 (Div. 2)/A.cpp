/**********************************************
 https://codeforces.com/contest/2043/problem/A
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, x=1;
    cin >> n;
    while (n>3) {
        n/=4;
        x*=2;
    }
    cout << x << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
