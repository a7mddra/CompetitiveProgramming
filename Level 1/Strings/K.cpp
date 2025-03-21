#include "bits/stdc++.h"
using namespace std;


bool func(const string& s, const string& t) {
    int n = s.size();
    int m = t.size();
    for (int i = 0 ; i < n ; i++) {
        for (int j = i ; j < n ; j++) {
        	string tt;        	
            for (int k = i ; k <= j ; k++) 
            	tt += s[k];
			for (int k = j - 1 ; k >= 0 ; k--) 
				tt += s[k];
				
	        if (tt.size() >= m && tt.substr(0, m) == t) 
	        	return true;		
        }
    }
    return false;
}



int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        if (func(s, t)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


