#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    char l1 = str.front();
    string A = "qwertyuiopasdfghjklzxcvbnm";
    string AA = "QWERTYUIOPASDFGHJKLZXCVBNM";
    
    for(int i = 0 ; i < A.size() ; i++){
        if (l1 == A[i]){
            str.front() = AA[i];
            break;
        }
    }
    
    cout<< str <<endl;

    return 0;
}
