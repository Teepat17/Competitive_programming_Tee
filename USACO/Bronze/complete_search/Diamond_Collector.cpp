/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector <int>

int32_t main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    VEC arr(n);
    FOR(0, n) cin >> arr[i];

    sort(all(arr));

    int mx = 0, j = 0;
    for (int i = 0; i < n; i++) {
        while (j < n && arr[j] - arr[i] <= k) j++;
        mx = max(mx, j - i);
    }

    cout << mx << '\n';
    return 0;
}