/*************************************************
 https://codeforces.com/problemset/problem/2043/B
**************************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, d;
	cin>>n>>d;
	cout<<1;
	if(n>=3||d%3==0)cout<<" 3";
	if(d==5)cout<<" 5";
	if(d==7||n>=3)cout<<" 7";
	if(d==9||(n>=3&&d%3==0)||n>=6)cout<<" 9";
	cout<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
