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

        VEC arr;
        FOR(2,51){
            bool c = true;
            for(int j=2; j*j <= i; j++){
                if(i%j==0 && i!=j){
                    c = false;
                    break;
                }
            }
            if(c) arr.pb(i);
        }
        int n ,m; cin >> n >> m;

        int s = (int)arr.size();
        bool g = false;
        FOR(0,s){
            if(arr[i] == n && i < s && arr[i+1] == m){
                g = true;
                break;
            }
        }

        cout << (g ? "YES" : "NO");
    }

    return 0;
}