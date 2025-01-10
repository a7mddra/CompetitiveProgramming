/*************************************************
 https://codeforces.com/problemset/problem/1851/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n, e;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0 ; i < n ; i++) {
	    cin >> e;
	    a[i] = e;
	    b[i] = e;
	}
	
	sort(b.begin(), b.end());
	string ans = "YES";
	for (int i = 0 ; i < n ; i++) {
	    if(b[i]%2!=a[i]%2) {
	    ans="NO";
	    break;
	    }
	}
	
	cout << ans << endl;
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
