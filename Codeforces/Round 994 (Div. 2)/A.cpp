/*************************************************
 https://codeforces.com/problemset/problem/2049/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

int solve()
{
    int n, cnt=0, ans;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        cnt += a[i];
    }
    if (cnt==0) return 0;
    for (int i=1; i<n-1; ++i)
        if (a[i-1]!=0&&a[i]==0) {
            for (int j=i+1; j<n; ++j) {
                if (a[j]!=0) {
                    return 2;
                }
            }
        }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) cout << solve() << '\n';
    return 0;
}
