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
    //cin >> t;
    while(t--){

        int n,a,b,c;
        cin >> n >> a >> b >> c;
        VEC dp(n+1,INT_MIN);
        dp[0] = 0;
        FOR(1,n+1){
            if(i>=a) dp[i] = max(dp[i],dp[i-a]+1);
            if(i>=b) dp[i] = max(dp[i],dp[i-b]+1);
            if(i>=c) dp[i] = max(dp[i],dp[i-c]+1);
        }
        
        cout << dp[n];
    }

    return 0;
}
