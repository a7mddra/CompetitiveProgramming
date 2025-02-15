/**********************************************
 https://codeforces.com/contest/2037/problem/C
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve(){
  ll n;
  cin >> n;
  if (n <= 4) cout << -1 << '\n';
  else {
    cout << "1 3 ";
    for (ll i = 7; i <= n; i += 2) cout << i << " ";
    cout << "5 4 2 ";
    for (ll i = 6; i <= n; i += 2) cout << i << " ";
  }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}

