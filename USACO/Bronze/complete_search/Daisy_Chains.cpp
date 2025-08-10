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
    //freopen("daisy.in", "r", stdin);
    //freopen("daisy.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        
        int n; cin >> n;
        VEC arr(n); FOR(0,n) cin >> arr[i];
        int cnt = 0;
        FOR(0,n){
            for(int j=i; j<n; j++){

                double sum = 0;
                for(int r = i; r <=j; r++) sum+=arr[r];
                sum /= j-i+1;

                for(int ft=i; ft <= j; ft++){
                    if(arr[ft] == sum){
                        cnt++;
                        break;
                    }
                }


            }
        }

        cout << cnt;
        
    }

    return 0;
}