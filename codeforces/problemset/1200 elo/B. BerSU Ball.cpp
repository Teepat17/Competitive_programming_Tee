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

        int n ,m; cin >> n;
        VEC boy(n); FOR(0,n) cin >> boy[i];
        cin >> m; VEC g(m); FOR(0,m) cin >> g[i];
        sort(all(boy)); sort(all(g));
        int ib = 0, ig = 0, cnt = 0;
        while(ib < n && ig < m){
            if(abs(boy[ib] - g[ig]) <= 1){
                cnt++;
                ib++;
                ig++;
            } else{
                if(boy[ib] > g[ig]) ig++;
                else ib++;
            }
        }

        cout << cnt;

    }

    return 0;
}