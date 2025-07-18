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
        vector <tuple<int,int,int>> arr;
        FOR(0,n){
            int a,b,c;
            cin >> a >> b >> c;
            arr.pb({a,b,c});
        }
 
        sort(all(arr));
        FOR(0,n){
            int li = get<0>(arr[i]);
            int ri = get<1>(arr[i]);
            int income = get<2>(arr[i]);
            if(li<=k && k<= ri && income > k){
                k = income;
            }
        }
 
        cout << k << endl;
    }
 
    return 0;
}