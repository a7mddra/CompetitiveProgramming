/*************************************************
 https://codeforces.com/problemset/problem/1650/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int l, r, a, max_mod, max_div, idx;
    cin >> l >> r >> a;

    int st = l % a;
    int cnt = (r - l + 1) / a;
    int rem = (r - l + 1) % a;  

    if (rem > 0) {
        int end = (st + rem - 1) % a;
        if (st <= end) {
            if (a - 1 >= st && a - 1 <= end) {
                cnt++;
            }
        } else {
            if (a - 1 >= st || a - 1 <= end) {
                cnt++;
            }
        }
    }

    if (cnt == 0) {
        max_mod = l%a + r-l;
        idx = r-l+1;
    }
    
    if (cnt > 0) {
        max_mod = a-1;
        idx = max_mod - l%a + (cnt-1) * a;
    }
    
    max_div = (l+idx) / a;
    
    cout << max_div + max_mod <<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    } return 0;
}
