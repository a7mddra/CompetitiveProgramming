#include "bits/stdc++.h"
using namespace std;

int fib(int a) {
    if (a == 0 || a == 1) return 1;
    return fib(a - 1) + fib(a - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
