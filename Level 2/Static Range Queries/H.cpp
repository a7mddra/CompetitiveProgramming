#include "bits/stdc++.h"
using namespace std;

bool comp(pair<int, int> x, pair<int, int> y) {
    return x.first > y.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end(), comp);
    int cnt = 0;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < a[i].second && cnt < a[i].second ; j++) {
            cout << endl;
            cnt++;
        }
        cout << a[i].first << " ";
    }    
}
