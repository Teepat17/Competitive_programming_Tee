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
        VEC h(n);
        vector<pii> arr;
        int mx = INT_MIN;
        FOR(0,n){
            int a;
            cin >> a;
            mx = max(a,mx);
            arr.pb({a,i});
        }

        sort(all(arr));
        int idx = -1;
        FOR(0,n){
            if(arr[i].S == k-1){idx = i; break;}
        }
        
        int dis = abs(mx-arr[idx].F);
        if(dis <= arr[idx].F){
            cout << "YES" << endl;
            continue;
        } else{
            int sum = 0;
            FOR(idx+1,n){
                sum += abs(arr[i].F-arr[i-1].F);
            }
            if(dis <= sum){
                cout << "YES " << dis << ' ' << sum << " arr = " << arr[idx].F << endl;
                continue;
            }
        }

        cout << "NO" << endl;


    }

    return 0;
}