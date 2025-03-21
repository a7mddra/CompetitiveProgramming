#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    char c;
    cin >> c;
    string ans = "consonant";
    for (int i = 0 ; i < 5 ; i++){
        if (c == vowel[i]){
            ans = "vowel";
            break;
        }


    }
    cout << ans;
    return 0;
}
