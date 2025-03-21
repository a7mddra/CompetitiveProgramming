#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve() {
    ll dirs[4] = {0, 1, 2, 3}, j = 0;
    ll bruteforce[24][4] = {0};
    
    do {
        for (ll i = 0; i < 4; ++i) {
            bruteforce[j][i] = dirs[i];
        }
        ++j;
    } while (next_permutation(dirs, dirs + 4));
    
    string grid, inst;
    ll r, c, s, e;
    cin >> r >> c;
    for (ll i = 0; i < r; ++i) {
        string line;
        cin >> line;
        grid += line;
        for (ll j = 0; j < c; ++j) {
            if (line[j] == 'S') {
                s = i * c + j;
            }
            if (line[j] == 'E') {
                e = i * c + j;
            }
        }
    }
    cin >> inst;
    
    ll cnt = 0;
    
    for (ll i = 0; i < 24; ++i) {
        ll current_s = s;
        bool found_e = false;
        for (char ch : inst) {
            ll x = ch - '0';
            ll dir = bruteforce[i][x];
            ll new_s = current_s;
            bool move_valid = true;
            
            if (dir == 0) {
                new_s = current_s + c;
                if (new_s >= r * c) move_valid = false;
            } else if (dir == 1) {
                new_s = current_s - 1;
                if (current_s % c == 0) move_valid = false;
            } else if (dir == 2) {
                new_s = current_s - c;
                if (new_s < 0) move_valid = false;
            } else {
                new_s = current_s + 1;
                if (current_s % c == c - 1) move_valid = false;
            }
            
            if (!move_valid || new_s < 0 || new_s >= r * c) break;
            
            char cell = grid[new_s];
            if (cell == '#') break;
            
            current_s = new_s;
            if (cell == 'E') {
                found_e = true;
                break;
            }
        }
        
        if (found_e || grid[current_s] == 'E') {
            cnt++;
        }
    }
    
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    while (t--) solve();
    return 0;
}
