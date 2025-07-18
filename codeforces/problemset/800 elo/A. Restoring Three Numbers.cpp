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

        VEC arr(4);
        FOR(0,4) cin >> arr[i];
        VEC ans(3);
        sort(all(arr));
        FOR(0,3){
            ans[i] = abs(arr[3]-arr[i]);
        }
        int mx = arr[3];
        if (accumulate(all(ans),0) != mx / 3) {
            cout << ans[0] << " " << ans[1] << ' ' << ans[2] << endl;
        } else {
            FOR(0,3) cout << mx/3 << ' ';
            cout << endl;
        }



    }

    return 0;
}