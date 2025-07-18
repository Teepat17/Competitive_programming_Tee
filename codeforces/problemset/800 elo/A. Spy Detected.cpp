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

        int n;
        cin >> n;
        unordered_map <int,pii> f;
        VEC arr(n);
        FOR(0,n){
            cin >> arr[i];
            if(!f.count(arr[i])) f[arr[i]] = {1,i};
            else f[arr[i]].F+=1;
        }

        for(auto [fe , idx] : f){
            if(idx.F == 1) cout << idx.S+1 << endl;
        }

    }

    return 0;
}