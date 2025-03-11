#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<pair<char, ll>, pair<char, ll>>> gates(n);
        for (int i = 0; i < n; i++) {
            string op1, op2;
            ll a1, a2;
            cin >> op1 >> a1 >> op2 >> a2;
            gates[i] = {{op1[0], a1}, {op2[0], a2}};
        }
        
        vector<vector<ll>> v(n + 1, vector<ll>(2, 1));
        for (int i = n - 1; i >= 0; i--) {
            v[i][0] = v[i + 1][0] + (gates[i].first.first == 'x' ? (gates[i].first.second - 1) * max(v[i + 1][0], v[i + 1][1]) : 0);
            v[i][1] = v[i + 1][1] + (gates[i].second.first == 'x' ? (gates[i].second.second - 1) * max(v[i + 1][0], v[i + 1][1]) : 0);
        }
        
        ll l = 1, r = 1;
        for (int i = 0; i < n; i++) {
            ll new_left = gates[i].first.first == '+' ? gates[i].first.second : (gates[i].first.second - 1) * l;
            ll new_right = gates[i].second.first == '+' ? gates[i].second.second : (gates[i].second.second - 1) * r;
            ll total_new = new_left + new_right;
            if (v[i + 1][0] >= v[i + 1][1]) l += total_new;
            else r += total_new;
        }
        cout << l + r << '\n';
    }
    return 0;
}
