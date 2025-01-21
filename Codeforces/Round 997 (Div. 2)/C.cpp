/*************************************************
 https://codeforces.com/problemset/problem/2056/C
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n;
	cin >> n;
    string str = "1";

    for (int i = 1; i < n - 1; ++i) {
        str += " " + to_string(i);
    }

    str += " 1";
    cout << str << endl;
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
