/*************************************************
 https://codeforces.com/problemset/problem/2057/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

int solve(int n, int k, vector<int>& arr) {
    map<int, int> freq;
    
    for (int num : arr) {
        freq[num]++;
    }
    
    vector<int> pq;

    for (auto& entry : freq) {
        pq.push_back(entry.second);
    } sort(pq.begin(), pq.end());
    
    int ans=0;
    for (int i = 0; i < pq.size(); i++) {
        int r=min(pq[i],k);
        k-=r;
        pq[i]-=r;
        if(pq[i])ans++;
    }
    return ans==0?1:ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k, e;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0 ; i < n ; i++) {
            cin >> e;
            arr[i] = e;
        }
        cout << solve(n, k, arr) << endl;
    } return 0;
}
