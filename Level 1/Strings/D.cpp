#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    while(n--){
        cin >> str;
        
        char l1 = str.front();
        char l2 = str.back();
        int num = str.size() - 2;
        if (num > 8){
            cout<<l1<<num<<l2<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
}
