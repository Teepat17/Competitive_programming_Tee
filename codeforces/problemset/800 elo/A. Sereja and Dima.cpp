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
        bool dt = false;
        bool st = true;
        int sa = 0 , di = 0;
        VEC arr(n);
        FOR(0,n) cin >> arr[i];
        int l =0 , r = n-1;
        while(l<=r){
            if(arr[l] < arr[r]){
                if(dt){
                    di += arr[r];
                    dt = false;
                    st = true;
                }else if(st){
                    sa += arr[r];
                    st = false;
                    dt = true;
                }
                r--;
            } else {
                if(dt){
                    di += arr[l];
                    dt = false;
                    st = true;
                }else if(st){
                    sa += arr[l];
                    st = false;
                    dt = true;
                }
                l++;
            }
        }
        
        cout << sa << ' ' << di;

    }

    return 0;
}