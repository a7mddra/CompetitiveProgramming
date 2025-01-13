/*************************************************
 https://codeforces.com/problemset/problem/2037/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n, cnt=0;
	cin >> n;
	vector<int> arr(n);
	unordered_map<int, int> freq;
	for (int i=0 ; i<n ; i++) {
	    cin >> arr[i];
	    freq[arr[i]]++;
	}
	
	for (auto& [k, c] : freq) {
	    cnt += c/2;
	}
	cout << cnt<<endl;
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
