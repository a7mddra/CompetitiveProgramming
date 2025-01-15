/*************************************************
 https://codeforces.com/problemset/problem/1759/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

bool check(double input) {
  double dis = 1 + 4 * input;

  if (dis < 0) {
    return false;
  }

  double m1 = (-1 + sqrt(dis)) / 2;
  double m2 = (-1 - sqrt(dis)) / 2;

  return ((int)m1 == m1) && ((int)m2 == m2); 
}

void solve()
{
    int m, s, e, min=INT_MAX, max=0, b[51]={0}, cnt=0;
    cin >> m >> s;
    cnt+=s;
    for (int i = 0; i < m; i++) {
        cin >> e;
        b[e]++;
        cnt+=e;
        if(min>e)min=e; 
        if(max<e)max=e;
    }
    for (int i = min; i > 0 ; i--) {
        if(b[i-1]==0&&i-1<=s){
            b[i-1]++;
            s-=i-1;
        }
        if (s<=0)break;
    }
    for (int i = min; i < max ; i++) {
        if (s<=0)break;
        if(b[i+1]==0&&i+1<=s){
            b[i+1]++;
            s-=i+1;
            if(max<i+1)max=i+1;
        }
    }
    for (int i = 1; i <= max; i++) {
        if(b[i]!=1){
            cout << "NO" << endl;
            return;
        }
    }
   cout << (check(2*s+(max+1)*(max+1)-(max+1))?"YES":"NO") << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
