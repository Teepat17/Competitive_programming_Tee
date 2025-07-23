#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i=a;i<b;++i)
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int32_t main() {
    fastio
    int n, t; cin >> n >> t;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int ans = 0, sum = 0, l = 0;
    rep(r,0,n) {
        sum += a[r];
        while (sum > t) sum -= a[l++];
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}