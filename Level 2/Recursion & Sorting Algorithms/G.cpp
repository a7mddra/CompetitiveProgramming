#include "bits/stdc++.h"
#define ll long long
using namespace std;

void Sort(ll a[], ll n, ll l, ll r) 
{
    sort(a, a+n);
    ll temp[n];
    ll i = l, j = r, k = 0, m = (l+r)/2;
    while (i<=m&&r>=m+1) {
        temp[k] = a[i++];
        k++;
        temp[k] = a[j--];
        k++;
    }
    for (int u = 0; u < n; u++) {
        a[u] = temp[u];
    }
}

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    
        Sort(a, n, 0, n-1);
    
        for (int i = n-1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
