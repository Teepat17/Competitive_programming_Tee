#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n,w;

    cin >> k >> n >> w;
    int total=k;
    for(int i=2; i<=w; i++){
        total += k*i;
    }

    cout << (total-n>0 ? total-n : 0);

    return 0;
}