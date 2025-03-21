#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    a[0] = 0;
    for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    int m, x, y;
    cin >> m;
    for (int i = 0 ; i < m ; i++) {
        cin >> x >> y;y++;
        cout << a[y]-a[x] << endl;
    }
    
    return 0;
}
