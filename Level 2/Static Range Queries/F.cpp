#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long a[n+1], b[n+1], o[n+1], z[n+1];
    a[0] = b[0] = o[0] = z[0] = 0;
    for (int i = 1 ; i < n+1 ; i++) {
        cin >> a[i];
        o[i] = z[i] = a[i];
    }
    for (int i = 1 ; i < n+1 ; i++) {
        cin >> b[i];
        b[i]?z[i]=0:o[i]=0;
    }    
    long long pref[n+1];
    memset(pref, 0, sizeof(pref));
    for (int i = 1 ; i < n+1 ; i++) {
        pref[i] = pref[i-1] + o[i];
    }
    long long preff[n+1];
    memset(preff, 0, sizeof(preff));
    for (int i = 1 ; i < n+1 ; i++) {
        preff[i] = preff[i-1] + z[i];
    }    
    long long MAX = LLONG_MIN;
    for (int i = 0; i < n+1-k; ++i) {
        long long s = preff[i + k] - preff[i];
        MAX = max(MAX, s);
    } 
    cout << MAX + pref[n];
    return 0;
}
