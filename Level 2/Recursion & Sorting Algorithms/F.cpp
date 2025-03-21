#include "bits/stdc++.h"
#define ll long long
using namespace std;

void merge(ll ar[], ll l, ll m, ll r) 
{
    ll i = l, j = m+1, k = 0;
    ll temp[r-l+1];
    while (i <= m && j <= r) {
        ar[i]<=ar[j]?temp[k]=ar[i++]:temp[k]=ar[j++];
        k++;
    }
    while (i <= m) {
        temp[k++] = ar[i++];
    }
    while (j <= r) {
        temp[k++] = ar[j++];
    }
    for (int u = l ; u <= r ; u++) {
        ar[u] = temp[u-l];
    }
}

void mergesort(ll ar[], ll l, ll r) 
{
    if (l<r){
        ll m = l+(r-l)/2;
        mergesort(ar, l, m);
        mergesort(ar, m+1, r);
        merge(ar, l, m, r);        
    }
}

void minmax(ll ar[], int n)
{
    int min = 0, max = n-1;
    ll temp[n];
    bool f = true;
    for (int i = 0 ; i < n ; i++) {
        f?temp[i]=ar[min++]:temp[i]=ar[max--];
        f = !f;
    }
    for (int u = 0 ; u <= n ; u++) {
        ar[u] = temp[u];
    }    
}

int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    mergesort(a, 0, n-1);
    minmax(a, n);
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] << " ";
    }    
}
