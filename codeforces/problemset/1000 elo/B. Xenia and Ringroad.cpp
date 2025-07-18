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

        int n,m;
        cin >> n >> m;
        VEC arr(m);
        FOR(0,m) cin >> arr[i];
        int cnt = 0;
        int cur = 1;
        FOR(0,m){
            if(arr[i] >= cur){
                cnt += arr[i] - cur;
            }else {
                cnt += n - cur + arr[i];
            }
            cur = arr[i];
        }

        cout << cnt;

    }

    return 0;
}