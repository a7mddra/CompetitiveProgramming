#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<long long, long long>> ab_pairs(n);

        for (int i = 0; i < n; i++) {
            cin >> ab_pairs[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> ab_pairs[i].second;
        }

        sort(ab_pairs.begin(), ab_pairs.end(), [](const pair<long long, long long> &x, const pair<long long, long long> &y) {
            return x.first > y.first;
        });

        long long a[n], b[n];
        for (int i = 0; i < n; i++) {
            a[i] = ab_pairs[i].first;
            b[i] = ab_pairs[i].second;
        }

        for (int i = 0 ; i < n ; i++) {
            if (b[i] <= a[i+1] && i+1 < n) {
                a[i] = b[i];
                b[i+1] += b[i];
                if (i+2 == n) {
                    a[i+1] = min(a[i+1], b[i+1]);
                }   
            }
               
            else {
                cout << min(a[i], b[i]) << endl;
                break;
            }
        }        
    }

    return 0;
}
