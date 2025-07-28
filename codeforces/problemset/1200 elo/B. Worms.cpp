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

        int n,m; cin >> n;
        vector <pii> arr;
        int _; cin >> _;
        arr.pb({1,_});
        FOR(1,n){
            int a; cin >> a;
            arr.pb({arr[i-1].S+1,(arr[i-1].S+a)});
        }
        cin >> m;
        VEC target(m);
        FOR(0,m) cin >> target[i];
        FOR(0,m){
            int tar = target[i];
            int l =0, r = n-1, idx = -1;
            while(l<=r){
                int mid = (r+l)/2;
                auto [b,u] = arr[mid];
                if(tar < b) r = mid-1;
                else if(tar > u) l = mid+1;
                
                if(tar >= b && tar <= u){
                    idx = mid;
                    break;
                }
            }

            cout << idx+1 << endl;
        }
        

    }

    return 0;
}