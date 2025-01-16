/*************************************************
 https://codeforces.com/problemset/problem/1992/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	for (int i=0; i<5 ; i++) {
	    sort(n, n+3);
	    n[0]++;
	}
	cout << n[0] * n[1] * n[2] << endl;
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
