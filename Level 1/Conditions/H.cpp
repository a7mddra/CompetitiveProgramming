#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n > 0 && n < 10){
        cout<<a[n-1]<<endl;
    }
    if(n > 9){
        cout<<"Greater than 9"<<endl;
    }

    return 0;
}
