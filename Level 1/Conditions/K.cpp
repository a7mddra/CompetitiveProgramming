#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m;
    cin>> m;
    if(m >= 0 && m < 40){
        cout<<40-m<<endl;
    }
    if(m >= 40 && m < 70){
        cout<<70-m<<endl;
    }
    if(m >= 70 && m < 90){
        cout<<90-m<<endl;
    }
    if(m >= 90 && m <= 100){
        cout<<"expert"<<endl;
    }
    return 0;
}
