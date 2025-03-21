#include <iostream>
using namespace std;

int main() {
    int V, T, S, D;
    cin >> V >> T >> S >> D;

    double time_to_hit = (double)D / V;

    if (time_to_hit >= T && time_to_hit <= S) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
