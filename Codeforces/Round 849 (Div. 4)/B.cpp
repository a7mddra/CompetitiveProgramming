/**********************************************
 https://codeforces.com/contest/1791/problem/B
***********************************************/
#include "bits/stdc++.h"
using namespace std;

string solve()
{
	int n, x=0, y=0;
	cin >> n;
	char c;
	string ans="NO";
	for (int i = 0; i < n; i++) {
		cin >> c;
		switch (c) {
        case 'U': y++; break;
        case 'D': y--; break;
        case 'R': x++; break;
        case 'L': x--; break;
		    default :      break;
		} if (x==1&&y==1) ans = "YES";
	} return ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		cout << solve() << endl;
	}
	return 0;
}
