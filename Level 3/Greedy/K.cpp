/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
string el = "\n";

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

void solve()
{
    ll n, a, b, c=1;
    string s;
    cin >> n >> a >> b >> s;
    if (b>=0) {
        cout << n*(a+b) << el;
        return;
    }
    for (ll i=1; i<n; i++)
    if (s[i] != s[i-1]) c++;
    cout << n*a+b*(c/2+1)<< el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
