#include "bits/stdc++.h"
#define ll long double
#define fix fixed<<setprecision
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n*(n-4)<0) {
        cout << "N\n";
        return;
    }
    ll sq = sqrt(n*(n-4));
    ll b = max(n+sq, n-sq)/2;
    if (b<0) {
        cout << "N\n";
        return;
    }
    cout<< "Y " <<fix(11)<<b<<" "<<fix(10)<<n-b<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve(); return 0;
}
