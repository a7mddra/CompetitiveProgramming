/**********************************************
 https://codeforces.com/contest/2044/problem/E
***********************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    long long k,l1,r1,l2,r2,cnt=0;
    cin>>k>>l1>>r1>>l2>>r2;
    for (long long p=1; p<=r2; p*=k) cnt += max(0LL, min(r1, r2/p) - max(l1, (l2+p-1)/p)+1);
    cout << cnt << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
