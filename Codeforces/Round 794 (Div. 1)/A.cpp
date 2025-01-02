/*************************************************
 https://codeforces.com/problemset/problem/1685/A
*************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, e;
    cin >> n;
    vector<int> a, b(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> e; a.push_back(e);
    }
    
    sort(a.begin(), a.end());
    int i = 0;
    int j = n/2;
    
    for (int k = 0 ; k < n ; k++) {
        b[k++] = a[i++];
        b[k]   = a[j++];
    }
    
    for (int k = 1 ; k < n-1 ; k++) {
        if (b[k] == b[k - 1] || b[k] == b[k + 1] || n & 1) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
    for (int k = 0 ; k < n ; k++) {
        cout << b[k] << " ";
    } cout << "\n";
}

int main()
{
    int t; cin >> t;
    while(t--) {
        solve();
    } return 0;
}
