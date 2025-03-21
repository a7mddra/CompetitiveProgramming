#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k, n;
    cin >> k;
    vector<int> counterValues(k);
    
    for (int z = 0; z < k; ++z){
        cin >> n;
    
        vector<int> days(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> days[i];
        }
        
        int counter = 0;
        int min_price = days[n-1];
        for (int i = n-2; i > -1; --i) {
            if(days[i] > min_price){
                counter++;
            }
            min_price = min(min_price, days[i]);
        }
        
        counterValues[z] = counter;
    }
    
    for (int l = 0; l < k; ++l) {
        cout << counterValues[l] << endl;
    }
    
    return 0;
}
