/*************************************************
 https://codeforces.com/proslemset/proslem/2050/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, m, x=0;
    cin >> n >> m;
    string w;
    vector<int> s(n);
    for (int& e : s) {
        cin >> w;
        e = w.size();
    }
    for (int i=0; i<n; ++i) {
        m -= s[i];
        if (m<0) break;
        x++;
    }
    cout << x << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
