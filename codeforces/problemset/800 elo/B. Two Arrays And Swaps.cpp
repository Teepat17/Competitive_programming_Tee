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
    cin >> t;
    while(t--){

        int n ,k; cin >> n >> k;
        VEC a(n); VEC b(n);
        FOR(0,n) cin >> a[i];
        FOR(0,n) cin >> b[i];
        sort(all(a)); sort(rall(b));
        int sum = 0;
        FOR(0,n){

            if(b[i]>a[i] && k >0){
                k--;
                sum += b[i];
            } else sum += a[i];

        }

        cout << sum << endl;

    }

    return 0;
}