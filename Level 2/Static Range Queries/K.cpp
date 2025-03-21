#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q, l, r, mx, mn;
        cin >> n >> q;
        string s;
        cin >> s;
        
        vector<int> pref(n+1), prefmx(n+1), prefmn(n+1);
        for (int i = 1 ; i <= n ; i++) {
            pref[i] = pref[i-1] + (s[i-1]=='+'?1:-1);
            prefmx[i] = max(prefmx[i-1], pref[i]);
            prefmn[i] = min(prefmn[i-1], pref[i]);
        }
        
        vector<int> suff(n+1), suffmx(n+1), suffmn(n+1);
        for (int i = n-1 ; i >= 0 ; i--) {
            suff[i] = suff[i+1] + (s[i]=='+'?1:-1);
            suffmx[i] = max(suffmx[i+1] + (s[i]=='+'?1:-1), 0);
            suffmn[i] = min(suffmn[i+1] + (s[i]=='+'?1:-1), 0);
        }        
        
        while(q--) {
            cin >> l >> r;l--;
            mx = max(prefmx[l], suffmx[r]+pref[l]);
            mn = min(prefmn[l], suffmn[r]+pref[l]);
            cout << mx-mn+1 << endl;
        }
    }
    
    return 0;
}

