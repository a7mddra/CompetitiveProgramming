/*************************************************
 https://codeforces.com/problemset/problem/1692/C
*************************************************/
#include "bits/stdc++.h"
using namespace std;

bool check(char board[8][8], int x, int y) {
    vector<pair<int, int>> dir = {{-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
    for (auto [dx, dy] : dir) {
        int nx = x + dx, ny = y + dy;
        if (nx < 0 || nx > 7 || ny < 0 || ny > 7 || board[nx][ny] != '#') {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char board[8][8];
        char c;
        for (int i = 0 ; i < 8 ; i++) {
            for (int j = 0 ; j < 8 ; j++) {
                cin >> c;
                board[i][j] = c;
            }
        }
        
        for (int i = 1 ; i < 7 ; i++) {
            for (int j = 1 ; j < 7 ; j++) {
                if (board[i][j] == '#' && check(board, i, j)) {
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }
    }
    return 0;
}
