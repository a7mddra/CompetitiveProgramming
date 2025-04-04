/*
 *  Author: a7mddra
 */
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
const ll INF = 1e18;
string el = "\n";

void ip(bool INTERACTIVE) {
#if LOCAL
    if (!INTERACTIVE)
    freopen("input.txt", "r", stdin);
#endif 
}

void solve()
{
    ll n; 
    cin >> n;
    
    vector<ll> p(n+1);
    for(ll i = 1; i <= n; i++)
        cin >> p[i];
    
    
    vector<ll> d(n);
    for(ll i = 0; i < n; i++)
        cin >> d[i];
    
    
    vector<ll> indeg(n+1, 0);
    for(ll i = 1; i <= n; i++)
        if(p[i] != 0)
            indeg[p[i]]++;
        
    

    vector<bool> del(n+1, false);
    ll cnt = n;
    queue<ll> q;
    for (ll qi = 0; qi < n; qi++){
        ll pos = d[qi];
        if(p[pos] != 0){
            ll target = p[pos];
            p[pos] = 0; 
            indeg[target]--; 
            if(indeg[target] == 0)
                q.push(target);
        }

        while(!q.empty()){
            ll u = q.front();
            q.pop();
            if(del[u])
                continue;
            del[u] = true;
            cnt--; 
            if(p[u] != 0){
                ll nxt = p[u];
                p[u] = 0;
                indeg[nxt]--;
                if(indeg[nxt] == 0)
                    q.push(nxt);
            }
        }
        ll ans = n-cnt;
        cout << ans << (qi ==n-1?el:" ");
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); ip(0);
    ll T = 1; cin >> T;
    while (T--) solve();
    return 0;
}
