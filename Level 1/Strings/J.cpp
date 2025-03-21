#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long s = str.size();
    char v[s];
    for (int i = 0 ; i < s ; i++){
        if (i == 0 && str[i] == '9'){
            v[i] = '9';
        }
        else if (str[i] >= '5'){
            v[i] = '9' - str[i] + '0';
        }
        else{
            v[i] = str[i];
        }
    }
    
    for (int i = 0 ; i < s ; i++){
        cout<<v[i];
    }
    return 0;
}
