#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n+1], a2[n+1];
    a1[0]=a2[0]=0;
    for (int i = 1 ; i < n+1 ; i++) {
        cin >> a1[i];
        a2[i]=a1[i];
    }
    sort(a2, a2+n+1);
    
    long long pref1[n+1];
    memset(pref1, 0, sizeof(pref1));
    
    for (int i = 1 ; i < n+1 ; i++) {
        pref1[i] = pref1[i-1] + static_cast<long long>(a1[i]);
    }
    long long pref2[n+1];
    memset(pref2, 0, sizeof(pref2));
    
    for (int i = 1 ; i < n+1 ; i++) {
        pref2[i] = pref2[i-1] + static_cast<long long>(a2[i]);
    }    
    int m, t, x, y;
    cin >> m;
    for (int i = 0 ; i < m ; i++) {
        cin >> t >> x >> y;x--;
        cout << (t==1?pref1[y]-pref1[x]:pref2[y]-pref2[x]) << endl;
    }
    return 0;
}
