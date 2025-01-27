/**********************************************
 https://codeforces.com/contest/2055/problem/B
***********************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int& e:a) cin >> e;
    for (int i=0; i<n; ++i) {
        cin >> b[i];
        a[i] -= b[i];
    }
    sort(a.begin(), a.end());
    
    cout << (a[0]+a[1]>=0?"yEs":"nO") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
