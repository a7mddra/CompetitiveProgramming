/*************************************************
 https://codeforces.com/problemset/problem/1721/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    set<char> ans;
    for (int i = 0; i < 4; i++) {
        char c;
        cin >> c;
        ans.insert(c);
    }
    cout << ans.size() - 1 << endl;
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
