/*************************************************
 https://codeforces.com/problemset/problem/2057/B
**************************************************/
#include "bits/stdc++.h"
using namespace std;

void freq_sort(vector<int>& arr)
{
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    sort(arr.begin(), arr.end(), [&freq](int a, int b) {
        if (freq[a] != freq[b]) {
            return freq[a] < freq[b];
        }   return      a  >      b ;
    });
}

int freq_cnt(vector<int>& arr)
{
    unordered_set<int> uni(arr.begin(), arr.end());
    return uni.size();
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
        freq_sort(arr);
        for (int i = 0 ; i < k ; i++) {
            arr[i] = arr[n-1];
        }
        cout << freq_cnt(arr) << endl;
    } return 0;
}
