#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string line;
    getline(cin, line);
    
    for(char ch : line){
        if ( ch == '\\' ){
            break;
        }
        cout << ch << "";

    }

    return 0;
}
