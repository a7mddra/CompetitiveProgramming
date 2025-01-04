/*************************************************
 https://codeforces.com/problemset/problem/2048/A
*************************************************/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t; cin >> t;
    long long n;
    while(t--) {
        cin >> n;
        cout << (n%33==0? "YES\n":"NO\n");
    } return 0;
}
