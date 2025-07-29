/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
string el = "\n";
const ll INF = 1e18;
const ll MOD = 1e9+7;
// const ll MOD = 998244353;

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

void solve(ll tc)
{

}


int main() {
    ios::sync_with_stdio(0); 
    ll T=1, i=0; cin.tie(0); ip(0);
    // cin >> T;
    #define fast i<T      
    // #define fast cin.peek() != EOF
    while (fast) {solve(i+1);i++;} return 0;
}
