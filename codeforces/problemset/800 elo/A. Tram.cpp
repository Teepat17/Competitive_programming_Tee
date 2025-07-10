#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int p_mx = INT_MIN;
    int p_cur = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        p_cur -= a;
        p_cur += b;
        p_mx = max(p_mx,p_cur);
    }

    cout << p_mx;

    return 0;
}