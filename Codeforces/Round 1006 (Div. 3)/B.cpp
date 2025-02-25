#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    ll n, h=0, u=0;
    char s;
    cin >> n;
    for (ll i=0; i<n; ++i) {
        cin >> s;
        s=='-'?++h:++u;
    }
    cout << ((h<2||u<1||n<3)?0:(h/2)*((h+1)/2)*u) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
