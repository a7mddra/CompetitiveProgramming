#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int& e : b) cin >> e;
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    int ans = 0;
    while (l < r) {
        int sum = b[l] + b[r];
        if (sum == k) {
            ans++;
            l++;
            r--;
        } else if (sum < k) l++;
        else r--;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
