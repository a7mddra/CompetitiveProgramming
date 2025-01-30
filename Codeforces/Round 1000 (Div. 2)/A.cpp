/*************************************************
 https://codeforces.com/problemset/problem/2063/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    cout << ((l==r&&l==1)?1:r-l) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
