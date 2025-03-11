#include "bits/stdc++.h"
#define ll long long
using namespace std;


string sol(ll n, ll x, const vector<ll>& arr) {
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    return (sum == (ll)n * x) ? "YES" : "NO";
}

void solve()
{
    ll n, x;
    cin >> n >> x;  
    
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    
    cout << sol(n, x, arr) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
