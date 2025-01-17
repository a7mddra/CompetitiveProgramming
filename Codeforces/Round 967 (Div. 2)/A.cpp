/*************************************************
 https://codeforces.com/problemset/problem/2001/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, e, ar[101]={0};
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> e;
        ar[e]++;
    }
    sort(ar, ar+101);
    cout << n - ar[100] << endl;
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
