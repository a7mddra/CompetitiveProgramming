#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    int d1 = n % 10;
    int d2 = m % 10;
    
    cout << d1 + d2;


    return 0;
}

