#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    long long a[n+1], l[k+1], r[k+1], d[k+1];
    a[0] = l[0] = r[0] = d[0] = 0;

    for (int i = 1 ; i < n+1 ; i++) {
        cin >> a[i];
    }
    
    for (int i = 1 ; i < k+1 ; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
    
    long long df[k+2] = {0}, pref[k+2] = {0}, x, y;
    
    for (int i = 0 ; i < m ; i++) {
        cin >> x >> y;
        df[x]++;
        df[y+1]--;
    }
    
    for (int i = 1 ; i <= k ; i++) {
        pref[i] = pref[i-1] + df[i];
    }
    for (int i = 1 ; i <= k ; i++) {
        d[i] *= pref[i];
    }    

    long long dff[n+2] = {0}, preff[n+2] = {0};
    
    for (int i = 1 ; i <= k ; i++) {
        dff[l[i]] += d[i];
        dff[r[i]+1] -= d[i];
    }    
    
    for (int i = 1 ; i <= n ; i++) {
        preff[i] = preff[i-1] + dff[i];
    }
    
    for (int i = 1 ; i <= n ; i++) {
        cout << preff[i] + a[i] << " ";
    }    
    
    return 0;
}
