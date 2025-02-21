#include "bits/stdc++.h"
#define ll long long
using namespace std;

/*
ll dirs[4]={0, 1, 2, 3}, k=0;
string p;
do {
    for (ll i=0; i<4; ++i) {
        p += dirs[i]+'0';
    }
    ++k;
} while (next_permutation(dirs, dirs+4));
*/
string p = "012301320213023103120321102310321203123013021320201320312103213023012310301230213102312032013210";
void solve()
{
    ll r, c, si, sj, ei, ej, cnt=0;
    cin >> r >> c;
    ll grid[r+2][c+2]={0};
    char ch;
    for (ll i=1; i<=r; ++i) {
        for (ll j=1; j<=c; ++j) {
            cin >> ch;
            grid[i][j] = 1;
            if (ch=='S') si=i, sj=j;
            if (ch=='E') ei=i, ej=j;
            if (ch=='#') grid[i][j]=0;
        }
    }
    string s;
    cin >> s;
    for (ll i=0; i<96; i+=4) {
        ll nsi=si, nsj=sj;
        for (ll j=0; j<s.size(); ++j) {
            if (s[j]==p[i+0]) --nsi;
            if (s[j]==p[i+1]) ++nsi;
            if (s[j]==p[i+2]) --nsj;
            if (s[j]==p[i+3]) ++nsj;
            if (nsi>r||nsi<1||nsj>c||nsj<1) break;
            if (grid[nsi][nsj]==0) break;
            if (nsi==ei&&nsj==ej) {
                ++cnt;
                break;
            }
        }
    }
    cout << cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;// cin >> t;
    while (t--) solve(); return 0;
}
