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
    // freopen("pails.in", "r", stdin);
    // freopen("pails.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        
        int n; cin >> n;
        VEC pos;
        vector <pii> cow;
        
        FOR(0,n){
            char a; int b; cin >> a >> b;
            cow.pb({(a == 'G') , b});
            pos.pb(b);
        }

        int ans = n;

        for(auto x : pos){
            int cnt =0;
            for(auto [t , p] : cow){
                if((t == 1 && x < p) || (t == 0 && x > p)) cnt++;
            }
            ans = min(ans,cnt);
        }
        
        cout << ans;
    }

    return 0;
}