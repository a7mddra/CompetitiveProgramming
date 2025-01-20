/*************************************************
 https://codeforces.com/problemset/problem/2055/A
*************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve() 
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << (abs(a-b)&1?"nO":"yEs") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
