/**********************************************
 https://codeforces.com/contest/2044/problem/F
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve() {
    ll n, m, q, x, f, sa = 0, sb = 0;
    cin >> n >> m >> q;
    unordered_set<ll> a, b;

    for (int i=0; i<n; ++i) {
		cin >> x;
		a.insert(x);
		sa += x;
	}
	for (int i=0; i<m; ++i) {
		cin >> x;
		b.insert(x);
		sb += x;
	}
    while (q--) {
        cin >> x;
        f = 0;
        
        for (ll i = 1; i*i <= abs(x); ++i) {
            if (x % i) continue;
            if ((a.count(sa-i)&&b.count(sb-x/i))
			||  (a.count(sa-x/i)&&b.count(sb-i))
			||  (a.count(sa+i)&&b.count(sb+x/i))
			||  (a.count(sa+x/i)&&b.count(sb+i)))
			f = 1;
        }
        cout << (f?"YES":"NO") << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;  // cin >> t;
    while (t--) solve(); 
    return 0;
}
