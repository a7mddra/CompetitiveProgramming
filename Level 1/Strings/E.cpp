#include "bits/stdc++.h"
using namespace std;

void count(string s, int n) {
    int MAX = 0;
    int c = 0;
    for (int i = 0 ; i < n-1 ; i++) {
        if (s[i] == s[i+1]) {
            MAX = max(MAX, c);
        }
        else {
            c++;
        }
    }
    cout << max(MAX, c)+1;
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
