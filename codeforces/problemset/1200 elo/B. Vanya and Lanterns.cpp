/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
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

        int n,l;
        cin >> n >> l;
        vector <double> arr(n);
        double dis = 0;
        FOR(0,n) cin >> arr[i];
        sort(all(arr));
        FOR(1,n){
            dis = max(dis,arr[i] - arr[i-1]);
        }
        dis /= 2.0;
        double disf = arr[0];
        double disl = l - arr[n-1];
        double ans = max({dis,disf,disl})/1.0;

        cout << fixed << setprecision(10) << ans;


    }

    return 0;
}