#include "bits/stdc++.h"
#define ll long long
using namespace std;

ll merge(ll ar[], ll l, ll m, ll r) 
{
    ll i = l, j = m+1, k = 0;
    ll temp[r-l+1];
    ll cnt = 0;
    
    while (i <= m && j <= r) {
        if (ar[i] <= ar[j]) {
            temp[k] = ar[i];
            i++;
        }
        else {
            temp[k] = ar[j];
            j++;    
            cnt += m - i + 1;
        }
        k++;  
    }
    while (i <= m) {
        temp[k] = ar[i];
        i++;
        k++;
    }
    while (j <= r) {
        temp[k] = ar[j];
        j++;
        k++;
    }  
    for (ll u=l ; u <= r ; u++) {
        ar[u] = temp[u-l];
    }
    return cnt;
}

ll mergesort(ll ar[], ll l, ll r) 
{
    ll cnt=0;
    if (l < r) {
        ll m = l + (r-l) / 2;
        cnt += mergesort(ar, l, m);
        cnt += mergesort(ar, m+1, r);
        cnt += merge(ar, l, m, r);
    }
    return cnt;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll cnt = mergesort(a, 0, n - 1);
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t; cin >> t;
    while (t--) solve(); return 0;
}
