#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int w,k;
    cin >> w >> k;
    int m = w;
    bool a[k+1];
    
    for (int b = 0; b < w ; b++) {
        memset(a, 0, sizeof(a));

        string input;
        cin >> input;
        
        for (char c : input){
            a[c - '0'] = 1;
        }
        
        int t=0;
        
        for (int i =0 ; i < k+1 ;i++){
            if (a[i] == 1){
                t++;
            }
        }
        if (t != k+1){
            m--;
        }    
    }
    cout<<m<<endl;
    return 0;
}
