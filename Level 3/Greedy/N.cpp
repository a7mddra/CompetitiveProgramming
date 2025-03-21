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
    ll c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    ll a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    a4-=min(a4, (c1-a1));
    a5-=min(a5, (c2-a2));
    cout << ((a1>c1||a2>c2||a3>c3||a3+a4+a5>c3)?"nO":"yEs") << el;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
