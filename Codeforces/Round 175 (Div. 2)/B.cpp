#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, x, k;
    string s;
    cin >> n >> x >> k >> s;
    ll init = 0, cnt = 0, rem = 0;
    bool f = false;
    ll pos = x;
    for (int i = 0; i < n; ++i) {
        if (pos == 0) break;
        if (s[i] == 'R') pos++;
        else pos--;
        if (pos == 0) {
            init = 1;
            cnt = i + 1;
            rem = k - cnt;
            f = true;
            break;
        }
    }
    if (!f) {
        if (pos == 0) {
            init = 1;
            cnt = n;
            rem = k - cnt;
        } else {
            cout << 0 << '\n';
            return;
        }
    }
    if (rem < 0) {
        cout << (k >= cnt ? init : 0) << '\n';
        return;
    }
    pos = 0;
    ll m1 = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R') pos++;
        else pos--;
        if (pos == 0 && i != n - 1) {
            m1 = i + 1;
            break;
        }
    }
    if (m1 == -1 && pos == 0) m1 = n;
    if (m1 != -1) init += rem / m1;
    cout << init << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
