#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> prefix(n, 0);

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (s[i] == s[i - 1]);
    }

    int m, x, y;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--; y--;
        cout << prefix[y] - prefix[x] << endl;
    }

    return 0;
}
