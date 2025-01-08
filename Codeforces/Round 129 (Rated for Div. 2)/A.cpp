/*************************************************
 https://codeforces.com/problemset/problem/1681/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int a, b, c;
	cin >> a;
	int maxa = 0;
	for (int i = 0; i < a; i++) {
		cin >> c;
		maxa = max(maxa, c);
	}
	cin >> b;
	int maxb = 0;
	for (int i = 0; i < b; i++) {
		cin >> c;
		maxb = max(maxb, c);
	}
	cout << ((maxa>maxb||maxa==maxb) ? "Alice" : "Bob") << endl;
    cout << ((maxa<maxb||maxa==maxb) ? "Bob" : "Alice") << endl;
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
