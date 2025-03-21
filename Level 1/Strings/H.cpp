#include <iostream>
using namespace std;

int main() {
    string g;
    cin >> g;
    for (int i = g.size() - 1; i >= 0; i--) {
        if (g[i] == '0') {
            g.pop_back();
        } else {
            break;
        }
    }
    
    int n = g.size();

    int t=0;
    for (int i = 0; i < n/2; i++){
        if (g[i] == g[n-i-1]){
            t++;
        }
    }
    if (t==n/2){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}
