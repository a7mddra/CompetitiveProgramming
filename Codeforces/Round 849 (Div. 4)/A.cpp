/**********************************************
 https://codeforces.com/contest/1791/problem/A
***********************************************/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
	char c;
	cin >> c;
	string cf = "cdefors";
	for(char x:cf){
	    if(c==x){
	        cout<<"yEs"<<endl;
	        return;
	    }
	}cout<<"nO"<<endl;
	
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
