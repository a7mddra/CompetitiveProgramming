/*************************************************
 https://codeforces.com/problemset/problem/2056/A
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	int n, m, xi=0, yi=0, x, y, grid[201][201]={0}, ans=0;
	cin >> n >> m;
	
	for (int i=0; i<n; i++) {
	    cin >> x >> y;
	    xi+=x;
	    yi+=y;
	    for (int j=xi; j<xi+m; j++) {
	        for (int k=yi; k<yi+m; k++) grid[j][k] = 1;
	    }
	}
	
	for (int i=0; i<201; i++) {
	    for (int j=0; j<201; j++) {
	        if(grid[i][j]==1) {
	            ans++;
	            break;
	        }
	    }
	}

	for (int i=0; i<201; i++) {
	    for (int j=0; j<201; j++) {
	        if(grid[j][i]==1) {
	            ans++;
	            break;
	        }
	    }
	}
	
	for (int i=200; i>=0; i--) {
	    for (int j=200; j>=0; j--) {
	        if(grid[i][j]==1) {
	            ans++;
	            break;
	        }
	    }
	}

	for (int i=200; i>=0; i--) {
	    for (int j=200; j>=0; j--) {
	        if(grid[j][i]==1) {
	            ans++;
	            break;
	        }
	    }
	}
	cout << ans << endl;
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
