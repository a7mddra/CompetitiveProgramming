#include "bits/stdc++.h"
using namespace std;

void filter(string s) {
    int n = s.size();
    for (int i = 2 ; i < n ; i += 2) {
        s.erase(i, 1);
        n--;
        i--;    
    }
    cout << s << endl;
}

int main()
{
    int m;
    cin >> m;
    while (m--){
        string str;
        cin >> str;
        filter(str);
    }

    return 0;
}
