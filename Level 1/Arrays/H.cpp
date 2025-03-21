#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int w, n, k;
    cin >> w;
    vector<int> results;
    
    while (w--) {
        cin >> n >> k;
        int a[n];
        int b[n];
        
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }    
        
        for (int i = 0; i < n; ++i){
            cin >> b[i];
        }    
        
        while (k--) {
            int min_index = min_element(a, a + n) - a;
            int max_index = max_element(b, b + n) - b;
            
            if (b[max_index] > a[min_index]) {
                a[min_index] = b[max_index];
                b[max_index] = 0;
            }
        }
        
        int sum_a = 0;
        
        for (int i = 0; i < n; i++) {
            sum_a += a[i];
        }
        
        results.push_back(sum_a);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
