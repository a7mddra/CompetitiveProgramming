#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 2, 0), p(n + 2, 0), s(n + 2, 0);
        int A = n, B = 0, C = 0, L = 0;
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            p[i] = p[i - 1] + (a[i] < 0);
            s[i] = s[i - 1] + (abs(a[i]) > 1);
        }
        
        auto update = [&](int l, int r) {
            if ((p[r] - p[l - 1]) % 2 == 0 && s[r] - s[l - 1] > C) {
                C = s[r] - s[l - 1];
                A = l - 1;
                B = n - r;
            }
        };
        
        for (int i = 1; i <= n + 1; i++) {
            if (a[i] == 0) {
                for (int j = L + 1; j < i; j++) {
                    update(L + 1, j);
                    update(j, i - 1);
                }
                L = i;
            }
        }
        
        cout << A << " " << B << endl;
    }
    return 0;
}
