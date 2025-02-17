/**********************************************
 https://codeforces.com/contest/1921/problem/C
***********************************************/
#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
   ll n,f,a,b;
   cin>>n>>f>>a>>b;
   vector<ll> arr(n);
   for (ll&e:arr)cin>>e;
 
   ll prev=0;
   for (ll i=0; i<n; ++i)
   {
        ll msg = (arr[i]-prev)*a;
        f -= msg<=b?msg:b;
        prev=arr[i];
        if(f<=0) {
            cout<<"nO\n";
            return;
        }
   }
   cout<<"yEs\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
