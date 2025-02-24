/*************************************************
 https://codeforces.com/problemset/problem/2010/B
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << 3-(n+k)%3 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;//  cin >> t;
    while (t--) solve(); return 0;
}
