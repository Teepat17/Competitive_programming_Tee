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
const int mod = 998244353;

int binpow(int a, int b){
    int res = 1;
    while (b){
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

        
        int n,m;
        cin >> n >> m;
        int ans = 0 , pp = 0, qq = 1;
        FOR(0,n){
            int l,r,p,q;
            cin >> l >> r >> p >> q;
            pp += p;
            qq *= q;
        }
        pp++;
        ans = binpow(qq,mod-2);
        cout << (pp * ans) % mod << endl;


    }

    return 0;
}