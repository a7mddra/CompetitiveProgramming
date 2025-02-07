/*************************************************
 https://codeforces.com/problemset/problem/2062/A
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll cnt=0LL;
    string s;
    cin >> s;
    for (char c:s) cnt+= c-'0';
    cout << cnt << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}

