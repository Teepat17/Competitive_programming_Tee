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
    cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        bool rest = false;
        VEC arr(n);
        FOR(0,n) cin >> arr[i];
        int cnt = 0;
        int day = 0;
        FOR(0,n){
            if(rest){
                day = 0;
                rest = false;
                continue;
            }
            
            if(arr[i] == 0){
                day++;
                if(day == k){
                cnt++;
                day = 0;
                rest = true;
                }
            } else if(arr[i] == 1) day = 0;
            
            

        }
        cout << cnt << endl;

    }

    return 0;
}