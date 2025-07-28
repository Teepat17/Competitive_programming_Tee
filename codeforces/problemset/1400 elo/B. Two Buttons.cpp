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

int recur(int n,int m){
    if(m<=n) return n-m;
    else{
        if(m%2==0) return 1 + recur(n,m/2);
        else return 1 + recur(n,m+1);
    }
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

        int n ,m; cin >> n >> m;
        cout << recur(n,m);

    }

    return 0;
}