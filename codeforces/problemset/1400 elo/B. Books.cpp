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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

        int n, t; cin >> n >> t;
        vector<int> arr(n);
        FOR(0,n) cin >> arr[i];

        int ans = INT_MIN, sum = 0, l = 0,r;
        for(int r = 0; r<n; r++) {
            sum += arr[r];
            while (sum > t) sum -= arr[l++];
            ans = max(ans, r - l + 1);
        }
        cout << ans;

    }

    return 0;
}