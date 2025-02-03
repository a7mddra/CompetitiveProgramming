/*************************************************
 https://codeforces.com/problemset/problem/2051/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, cnt=0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int& e : a) cin >> e;
    for (int& e : b) cin >> e;
    for (int i=0;i <n-1; ++i) {
        if (a[i]>b[i+1]) cnt += a[i]-b[i+1];
    }
    cout << cnt + a[n-1] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
