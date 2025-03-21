#include "bits/stdc++.h"
using namespace std;

int main() {
    string str, v;
    getline(cin, str);
    int n = str.size();
    
    for (int i = 1; i < n - 1; i += 3) { 
        v.push_back(str[i]);
    }
    
    sort(v.begin(), v.end());
    
    v.erase(unique(v.begin(), v.end()), v.end());
    
    cout << v.size() << endl;

    return 0;
}
