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

        int n; cin >> n;
        vector <pii> arr;
        FOR(0,n){
            int a ,b; cin >> a >> b;
            arr.pb({a,b});
        }
        sort(all(arr));
        bool c = false;
        FOR(1,n){
            auto [pf,qf] = arr[i-1];
            auto [p,q] = arr[i];

            if(pf < p && qf > q) c = true;
            
        }

        cout << (c ? "Happy Alex" : "Poor Alex");

    }

    return 0;
}