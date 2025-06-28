#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n,m;
    char op;
    cin >> n >> op >> m;
    if(op == '+') cout << n+m;
    else cout << n*m;
    return 0;
}