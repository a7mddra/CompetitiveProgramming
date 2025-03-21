#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n;
    int oskols[n];
    for (int i = 0; i < n; ++i) {
        cin >> oskols[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x -= 1;
        oskols[x] -= 1;
        if (n-1 > x && x > 0){
            
            oskols[x-1] += y - 1;
            oskols[x+1] += oskols[x] - y +1;
            oskols[x] = oskols[x] - y + 1 - oskols[x] + y - 1;
        }
        if (x == 0){
            oskols[1] += oskols[0] - y +1;
            oskols[0] -= oskols[0];
        }
        if (x == n-1){
            oskols[x-1] += y - 1;
            oskols[x] -= oskols[x];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout<<oskols[i]<<endl;
    }

    
    return 0;
}
