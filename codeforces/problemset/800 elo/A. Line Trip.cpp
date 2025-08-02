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
    cin >> t;
    while(t--){

        int n,x; cin >> n >> x;
        VEC arr(n+1,0); FOR(1,n+1) cin >> arr[i];
        int mx = LLONG_MIN; n++;
        FOR(1,n) mx = max(mx, arr[i] - arr[i-1]);

        mx = max(mx , 2*(x-arr[n-1]));

        cout << mx << endl;


    }

    return 0;
}