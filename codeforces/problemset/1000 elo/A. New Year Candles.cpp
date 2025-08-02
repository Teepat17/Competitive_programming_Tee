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

        int a ,b; cin >> a >> b;
        int aa = a;
        int cnt = 0 , a1;
        while(a>=b){
            a1 = a/b;
            cnt += a1;
            a = a/b+a%b;
        }

        cout << aa+cnt;

    }

    return 0;
}