/*************************************************
 https://codeforces.com/problemset/problem/1728/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n, e, idx, max=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    cin >> e;
	    if (e>max) {
	        max=e;
	        idx=i+1;
	    }
	}
	cout << idx << endl;
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
