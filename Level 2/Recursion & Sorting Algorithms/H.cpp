#include "bits/stdc++.h"
using namespace std;

string sub(string s)
{
    int sz = s.size();
    if (sz%2) return s;
    string s1, s2;
    s1 = sub(s.substr(0, sz/2));
    s2 = sub(s.substr(sz/2));
    if (s1<s2) return s1 + s2;
    else return s2 + s1;
    
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << (sub(s)==sub(t)?"YES":"NO");
    return 0;
}
