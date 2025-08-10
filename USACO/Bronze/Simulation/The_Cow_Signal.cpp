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
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        
        int n,m,k; cin >> n >> m >> k;
        char arr[n][m];
        FOR(0,n) for(int j =0; j<m; j++) cin >> arr[i][j];

        FOR(0,n){
            for(int j = 0; j<k; j++){
                for(int q= 0; q<m; q++){
                    for(int r = 0; r < k; r++) cout << arr[i][q];
                }
                cout << endl;
            }
        }
        
    }

    return 0;
}