#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,n,m;
    cin >> m >> n >> a;
    int an = (n+a-1)/a;
    int am = (m+a-1)/a;
    cout << an*am;

    return 0;
}