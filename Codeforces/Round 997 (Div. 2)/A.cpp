/*************************************************
 https://codeforces.com/problemset/problem/2056/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n, m, x, y, cnt=0;
	cin >> n >> m >> x >> y;
	for (int i=1; i<n; i++) {
	    cin >> x >> y;
	    cnt+=m-x+m-y;
	}
	cout << n*m*4 - cnt*2 << endl;
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
