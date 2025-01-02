/**********************************************
 https://codeforces.com/contest/2020/problem/A
**********************************************/
#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        int n, k, op = 0;
        cin >> n >> k;
        if (k==1) {
            cout << n << endl;
        }
        else { while (n > 0) {
                op += n % k;
                n /= k;
            
        }
        cout << op << endl;
            
        }
    }
    return 0;
}
