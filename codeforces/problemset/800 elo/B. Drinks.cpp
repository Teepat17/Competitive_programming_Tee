#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    float res=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        res += a;
    }

    cout << res/n;

    return 0;
}