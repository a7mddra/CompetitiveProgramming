#include "bits/stdc++.h"
#define ll long long
using namespace std;

string rd(string s) {
    ll n = s.size();
    if (n == 0) return s;
    ll j = 0;
    for (ll i = 1; i < n; ++i) {
        if (s[i] != s[j]) {
            j++;
            s[j] = s[i];
        }
    }
    s.resize(j + 1);
    return s;
}

void solve()
{
    ll n, k=0;
    cin >> n;
    string s, t;
    cin >> s;
    if (rd(s)=="0") {
        cout << "0\n";
        return;
    }
    for (ll i=0; s[i]!='1'; ++i) k++;
    t=rd(s.substr(k));
    cout << t.size()<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t;  cin >> t;
    while (t--) solve(); return 0;
}
