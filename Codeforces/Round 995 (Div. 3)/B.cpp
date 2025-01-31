/**********************************************
 https://codeforces.com/contest/2051/problem/B
***********************************************/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    
    long long sum = a + b + c;
    long long cnt = 3 * (n / sum); 
    long long rem = n % sum;

    if (rem > 0) cnt++;
    if (rem > a) cnt++;
    if (rem > a + b) cnt++;

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve();
    return 0;
}
