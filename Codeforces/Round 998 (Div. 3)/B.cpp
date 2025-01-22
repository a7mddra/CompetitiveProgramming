/*************************************************
 https://codeforces.com/problemset/problem/2060/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int ar[n*m];
    for (int i=0; i<n*m; ++i) {
        cin >> ar[i];
    }
    for (int i=0; i<n; ++i) {
        sort(ar+i*m, ar+(i+1)*m);
    }
    for (int i=1; i<n*m; ++i) {
        if(ar[i]-ar[i-1]!=n && i%m!=0){
            cout << -1 << endl;
            return;
        }
    }
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i) {
        vec.emplace_back(i, ar[i * m]);
    }
    
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    
    for (const auto& p : vec) {
        cout << p.first+1 << " ";
    } cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
