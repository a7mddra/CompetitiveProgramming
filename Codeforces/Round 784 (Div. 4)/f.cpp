/**********************************************
 https://codeforces.com/contest/1669/problem/F
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n,ans=0,x;
    cin>>n;
    for(ll i=1;i<=n;i++)   cin>>x,b[i]=b[i-1]+x;
    for(ll i=1,j=n-1;i<=j;){
        x=b[n]-b[j];
        if(b[i]==x) ans=max(ans,i+n-j);
        b[i]<x ? i++:j--;
    }
    cout<<ans<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
