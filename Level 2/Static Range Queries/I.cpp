#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0, p = 0;
        if (s[p] == '0') cnt++;
        for (int i = 1; i < n; i++) {
            if (s[i] == '1') {
                if (i - p <= k) cnt--;
                p = i;
            } else {
                if (i - p > k) {
                    cnt++;
                    p = i;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
