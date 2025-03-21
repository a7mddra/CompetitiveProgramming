#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cin >> A >> B;
    int a = A + B;
    int c = A - B;
    int b = A * B;
    if(a > b){
        if(a > c){
            cout<<a<<endl;
        }
        else{
            if(c > b){
                cout<<c<<endl;
            }
            
        }
    }
    else{
        cout<<b<<endl;
    }
    return 0;
}
