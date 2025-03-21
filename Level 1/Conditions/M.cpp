#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int max_cons_r_days = 0;
    int cons_r_days = 0;

    for (char c : S) {
        if (c == 'R') {
            cons_r_days++;
            max_cons_r_days = max(max_cons_r_days, cons_r_days);
        } else {
            cons_r_days = 0;
        }
    }

    cout << max_cons_r_days << endl;

    return 0;
}
