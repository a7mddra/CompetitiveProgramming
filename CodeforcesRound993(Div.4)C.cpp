/**********************************************
 https://codeforces.com/contest/2044/problem/C
**********************************************/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t, m, a, b, c, ans=0;
    cin >> t;
    while(t--) {
        cin >> m >> a >> b >> c;
        ans += min(m, a) + min(m, b);
        ans += min(m*2 - ans, c);
        cout << ans << endl;
        ans = 0;
    } return 0;
}
