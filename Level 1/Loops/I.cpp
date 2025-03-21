#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> g(5, 0);
    int gize;
    for (int i = 0; i < n; ++i) {
        cin >> gize;
        g[gize]++;
    }

    int taxis = g[4];
    taxis += g[3];
    g[1] -= min(g[1], g[3]);
    taxis += g[2] / 2;
    if (g[2] % 2 != 0) {
        taxis++;
        g[1] -= 2;
    }
    if (g[1] > 0) {
        taxis += (g[1] + 3) / 4;
    }

    cout << taxis << endl;

    return 0;
}
