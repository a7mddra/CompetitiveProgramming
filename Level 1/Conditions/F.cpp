#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(100 <= n && n <= 999){
        if((n/100)%10 == n%10){
            cout<<"Yes"<<endl;
        }
        else{
        cout<<"No"<<endl;
        }
    }

    else{
        cout<<"No"<<endl;
    }

    return 0;
}
