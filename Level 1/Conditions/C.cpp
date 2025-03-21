#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cin >> A >> B;
    if(0 < A && B == 0){
        cout<<"Gold"<<endl;
    }
    if(0 < B && A == 0){
        cout<<"Silver"<<endl;
    }
    if(0 < A && 0 < B){
        cout<<"Alloy"<<endl;
    }
    return 0;
}
