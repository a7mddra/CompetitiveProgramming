#include "bits/stdc++.h"
using namespace std;

void count(string s, int n) {
    int c = 0;
    for (int i = 0 ; i < n-1 ; i++) {
        if (s[i] == s[i+1]) {
            c++;
        }
    }
    cout << c;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    count(str, n);

    return 0;
}
