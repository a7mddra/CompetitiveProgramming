#include <iostream>
using namespace std;

int main()
{
    int moneyy, money, one=0, five=0, ten=0, twenty=0, one_hundred=0;
    cin >> moneyy;
    money = moneyy;
    int d1 = money % 10;

    if ( d1 >= 5 ){
        five ++;
        money -= 5;
    }

    int d11 = money % 10;  
    
    if ( d11 > 0 ){
        one += d11;
    }
    money = money / 10;
    
    int d2 = money % 10;
    
    if ( d2 % 2 != 0 && d2 > 0 ){
        
        ten ++;
        money --;
    }
    if ( d2 > 0 ){
        
        twenty += d2/2;
        
    }
    one_hundred += moneyy / 100;
    cout<<one + five + ten + twenty + one_hundred;
    
    return 0;
}
