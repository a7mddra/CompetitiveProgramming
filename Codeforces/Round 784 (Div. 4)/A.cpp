/*************************************************
 https://codeforces.com/contest/1669/problem/A
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, dev;
    cin >> n;
    if (n>=1900) dev=1;
    else if (n>=1600) dev=2;
    else if (n>=1400) dev=3;
    else dev=4;
    cout << "Division " << dev <<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
