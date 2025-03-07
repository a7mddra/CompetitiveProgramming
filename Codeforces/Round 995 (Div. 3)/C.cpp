/************************************************
 http://codeforces.com/problemset/problem/2051/C
*************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, m, k, t;
    cin >> n >> m >> k;
    vector<ll> a(m), b(n+1);
    for (ll& e : a) cin >> e;
    for (ll i=0; i<k; ++i) {
        cin >> t;
        ++b[t];
    }
	for(const auto &i:a)
		cout<<(k<n-1 ? 0:(k==n?1:!b[i]));
		cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
