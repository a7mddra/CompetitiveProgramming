#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if(n > 0 && n < 13 && m > 0 && m < 32 && n <= m){
        cout<<n<<endl;
    }
    else{
        if(n > 0 && n < 13 && m > 0 && m < 32){
            cout<<n-1<<endl;
        }

    }

    return 0;
}
