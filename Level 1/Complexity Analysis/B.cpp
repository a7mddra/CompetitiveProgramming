#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve()
{
    string s, t;
    cin>>s;
    ll n, cnt0=0, cnt1=0, cnt2=0, MIN, MAX;
    cin>>n;
    for (char c:s) 
        c=='?'?++cnt0:c=='*'?++cnt1:++cnt2;
    MIN=cnt2-cnt1-cnt0;
    MAX=cnt1>0?1e9:cnt2;
    if (n<MIN||n>MAX) {
        cout << "Impossible";
        return;
    }
    for (ll i=0; i<s.size()&&t.size()<n; ++i) {
        if(s[i]=='?'||s[i]=='*') continue;
        else {
            if (i+1<s.size()&&s[i+1]=='*') {
                while (n>cnt2) {
                    t+=s[i];
                    ++cnt2;
                }
                if (n<cnt2) --cnt2;
                else t+=s[i];
            } else if (i+1<s.size()&&s[i+1]=='?') {
                if (n<cnt2) --cnt2;
                else t+=s[i];
            } else t+=s[i];
        }
    }
    cout << t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    ll t=1;//  cin >> t;
    while (t--) solve(); return 0;
}
