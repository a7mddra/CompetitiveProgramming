#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k, x, y, q;
    cin >> n >> k >> q;
    int a[200002];
    memset(a, 0, sizeof(a));
    for (int i = 0 ; i < n ; i++) {
        cin >> x >> y;
        a[x]++;
        a[y+1]--;
    }
    int pref[200002];
    memset(pref, 0, sizeof(pref));   
    for (int i = 1 ; i < 200002 ; i++) {
        pref[i] = pref[i-1]+a[i];
    }
    int cnt[200002];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0 ; i < 200002 ; i++) {
        if (pref[i] >= k) {
            cnt[i] = cnt[i-1] + 1;
        }
        else {
            cnt[i] = cnt[i-1];
        }
    }
    for (int i = 0 ; i < q ; i++) {
        cin >> x >> y;
        cout << cnt[y] - cnt[x-1] << endl; 
    }
    return 0;
}
