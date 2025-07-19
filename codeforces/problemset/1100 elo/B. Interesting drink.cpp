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

        int n,q;
        cin >> n;
        VEC shop(n);
        FOR(0,n) cin >> shop[i];
        cin >> q;
        VEC days(q);
        FOR(0,q) cin >> days[i];
        sort(all(shop));

        FOR(0,q){
            int tar = days[i];
            if(tar < shop[0]) cout << 0 << endl;
            else{
                int l = 0 , r = n-1;
                while(l<=r){
                int mid = (r+l)/2;
                if(shop[mid] <= tar) l = mid+1;
                else r = mid-1;
                }
                cout << l << endl;
            }
            
        }
    }

    return 0;
}