/**********************************************
 https://codeforces.com/contest/2059/problem/A
***********************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, e;
    cin >> n;
    set<int> s1;
    set<int> s2;
    for (int i=0; i<n; ++i) {
        cin >> e;
        s1.insert(e);
    }
    for (int i=0; i<n; ++i) {
        cin >> e;
        s2.insert(e);
    }    
    cout << ((s1.size()+s2.size())>3?"yEs":"nO") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
