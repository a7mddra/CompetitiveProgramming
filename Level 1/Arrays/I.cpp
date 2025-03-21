#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n, d, MAX, MIN, maxi, mini, ans;
    cin >> n;
    vector<int> arr;
    for (int i = 0 ; i < n ; i++) {
        cin >> d;
        arr.push_back(d);
    }
    MAX = INT_MIN;
    MIN = INT_MAX;
    for(int i = 0 ; i < n ; i++) {
        if (arr[i] > MAX) {
            MAX = arr[i];
            maxi = i;
        }
        if (arr[i] <= MIN) {
            MIN = arr[i];
            mini = i+1;
        }        
    }
    
    ans = maxi + n - mini;
    if (maxi >= mini) {
        ans--;
    }
    
    cout<<ans;

    return 0;
}
