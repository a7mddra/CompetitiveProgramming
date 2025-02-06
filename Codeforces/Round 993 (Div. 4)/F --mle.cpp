/**********************************************
 https://codeforces.com/contest/2044/problem/F
***********************************************/
#include "bits/stdc++.h"
using namespace std;

int sum(pair<int, int>& ci, vector<vector<int>>& grid, int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (i == ci.first) {
            continue;
        }
        for (int j = 0; j < m; ++j) {
            if (j == ci.second) {
                continue;
            }
            s += grid[i][j];
        }
    }
    return s;
}

void solve()
{
    int n, m, q, x;
    cin >> n >> m >> q;
    vector<int> a(n);
    vector<int> b(m);
    vector<vector<int>> grid(n, vector<int>(m, 0));
    vector<pair<int, int>> c;
    vector<int> s(n * m);
    
    for (int& e : a) cin >> e;
    for (int& e : b) cin >> e;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            grid[i][j] = a[i] * b[j];
            c.emplace_back(i, j);
        }
    }
    
    for (int u = 0; u < n * m; ++u) {
        s[u] = sum(c[u], grid, n, m);
    }
    
    sort(s.begin(), s.end());

    for (int i = 0; i < q; ++i) {
        cin >> x;
        cout << (binary_search(s.begin(), s.end(), x) ? "yEs" : "nO") << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;  // cin >> t;
    while (t--) solve(); 
    return 0;
}
