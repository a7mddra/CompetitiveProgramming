#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) 
{
    if (x.first == y.first) {
        return x.second < y.second;
    }
    return x.first < y.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), compare);
    int MAX = 0;
    for (int i = 0 ; i < n ; i++) {
        if (a[i].second >= MAX) {
            MAX = a[i].second;
        }
        else {
            MAX = a[i].first;
        }
    }
    cout << MAX;
    return 0;
}
 
