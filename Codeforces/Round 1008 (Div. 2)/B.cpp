#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        a[n] = n - 1;
        a[n - 1] = n;
        int target = (k % 2 == 1) ? n : n - 1;
        for (int i = 1; i <= n - 2; ++i) {
            a[i] = target;
        }
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
