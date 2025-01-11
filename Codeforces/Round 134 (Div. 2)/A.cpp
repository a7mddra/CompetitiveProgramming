/*************************************************
 https://codeforces.com/problemset/problem/1721/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	char ul, ur, dl, dr;
	cin >> ul >> ur >> dl >> dr;
	set<char> ans;
	ans.insert(ul);
	ans.insert(ur);
	ans.insert(dl);
	ans.insert(dr);
	cout << ans.size()-1 <<endl;
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
