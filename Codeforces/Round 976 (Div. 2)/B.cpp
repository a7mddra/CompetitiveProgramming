/**********************************************
 https://codeforces.com/contest/2020/problem/B
**********************************************/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        long long n, l=1, r=2e18, ans=0, mid, t, cnt;
        cin >> n;
        while(l<=r){
            mid= (l+r)/2;
            t=sqrt(mid);
            while(t*t>mid) t--;
            while((t+1)*(t+1)<=mid)t++;
            
            cnt = mid-t;
            if(cnt>=n) {
                ans = mid;
                r=mid-1;
            } else {
                l = mid+1;
            }
        }
            cout << ans << endl;
        
    }
    return 0;
}
