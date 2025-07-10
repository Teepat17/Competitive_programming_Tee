#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum =0;
    int x = 0;
    int y = 0;
    int z = 0;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }

    cout << (x==0 && y == 0 && z == 0 ? "YES" : "NO");

    return 0;
}