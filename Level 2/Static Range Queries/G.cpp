#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, id, a[200002]={0}, l=0, r=0;
	cin >> n;
	n--;
	char c; 
	cin >> c >> id;
	while (n--) {
	    cin >> c >> id;
	    if (c=='L'){
	        l--;a[id]=l;
	    }
	    else if (c=='R'){
	        r++;a[id]=r;
	    }
	    else {
	        cout << min(r-a[id], a[id]-l)<<endl;
	    }
	}
}
