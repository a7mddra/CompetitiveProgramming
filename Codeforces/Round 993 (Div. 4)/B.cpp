/*************************************************
 https://codeforces.com/problemset/problem/2044/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string in, out;
    cin >> in;
    for (int i=in.size()-1; i>-1; --i) {
        if (in[i]=='q') in[i] = 'p';
        else if (in[i]=='p') in[i] = 'q';
        out+=in[i];
    }
    cout << out << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;  cin >> t;
    while (t--) solve(); return 0;
}
