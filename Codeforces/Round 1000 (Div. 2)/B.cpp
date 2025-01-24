/*************************************************
 https://codeforces.com/problemset/problem/2063/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int& num : a) {
        cin >> num;
    }
    
    int k = r - l + 1;
    vector<int> sub1(a.begin(), a.begin() + min(r, n));
    vector<int> sub2;
    if (l - 1 < n) {
        sub2 = vector<int>(a.begin() + (l - 1), a.end());
    }
    
    sort(sub1.begin(), sub1.end());
    sort(sub2.begin(), sub2.end());
    
    long long sum1 = 0, sum2 = 0;
    int take1 = min(k, static_cast<int>(sub1.size()));
    for (int i = 0; i < take1; ++i) {
        sum1 += sub1[i];
    }
    int take2 = min(k, static_cast<int>(sub2.size()));
    for (int i = 0; i < take2; ++i) {
        sum2 += sub2[i];
    }
    
    cout << min(sum1, sum2) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
	int t;  cin >> t;
	while(t--) solve(); return 0;
}
