/*************************************************
 https://codeforces.com/problemset/problem/2048/B
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, k, e=1;
    cin >> n >> k;
    vector<ll> f, z, o(n, 0);
    for (ll i=k-1; i<n; i+=k) {
        o[i]=-1;
        f.push_back(i);
    }
    for (ll i=0; i<n; ++i) if (o[i]==0) z.push_back(i);
    for (ll p : f) o[p] = e++;
    e = f.size()+1;
    for (ll p : z) o[p] = e++;
    for (ll p : o) cout << p << " ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
