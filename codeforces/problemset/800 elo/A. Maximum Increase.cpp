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

        int n;
        cin >> n;
        VEC arr(n);
        FOR(0,n) cin >> arr[i];
        int cnt = 1;
        int ans = 1;

        FOR(1,n){
            if(arr[i] > arr[i-1]){
                cnt++;
            } else {
                cnt = 1;
            }
            ans = max(ans,cnt);
        }
        cout << ans;

    }

    return 0;
}