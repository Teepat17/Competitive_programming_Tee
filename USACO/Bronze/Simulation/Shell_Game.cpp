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
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> t;
    while(T--){
        
        int n; cin >> n;
        int arr[n][3];
        FOR(0,n) for(int j =0; j<3; j++) cin >> arr[i][j];
        
        int mx = INT_MIN;

        FOR(0,n){
            int idx = i+1;
            int cnt = 0;
            for(int j = 0; j<n; j++){
                int a = arr[j][0] , b = arr[j][1] , g = arr[j][2];
                if(a == idx) idx = b;
                else if(b == idx) idx = a;

                if(idx == g) cnt++;
            }
            mx = max(cnt, mx);
        }
        
        cout << mx;
        
    }

    return 0;
}