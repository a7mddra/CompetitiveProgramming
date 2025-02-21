#include "bits/stdc++.h"
#define ll long long
using namespace std;

ll def(ll a, ll b) 
{
    return (a+b-1)/b;
}

void solve()
{
        ll hc, dc, hm, dm, c, d, h, rc, rm;
        cin >> hc >> dc >> hm >> dm >> c >> d >> h;
        
        rc = def(hc, dm);
        rm = def(hm, dc);
        bool win=false;
        
        for (int i = 0 ; i <= c ; i++) {
            if (def(hc + i*h, dm) >= rm) {
                win=true;
                break;
            }
        }
        for (int i = 0 ; i <= c ; i++) {
            if (rc >= def(hm, dc + i*d)) {
                win=true;
                break;
            }        
        }
        for (int i = 0 ; i <= c ; i++) {
            int ii = c-i;
            if (def(hc + i*h, dm) >= def(hm, dc + ii*d)) {
                win=true;
                break;
            }        
        } 
        
        cout << (win?"YES":"NO")<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve(); return 0;
}
