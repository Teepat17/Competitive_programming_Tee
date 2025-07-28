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

        int n,t; cin >> n >> t;
        t--;
        VEC arr(n);
        FOR(0,n) cin >> arr[i];
        int idx = 0;
        for(int i =0; i<n;){
            idx = i;
            i += arr[i];
            if(idx == t){
                cout << "YES";
                return 0;
            } else if(idx > t){
                cout << "NO";
                return 0;
            }
        }

    }

    return 0;
}