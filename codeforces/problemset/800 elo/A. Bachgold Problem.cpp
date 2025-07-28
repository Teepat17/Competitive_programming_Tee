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

        int n;
        cin >> n;
        vector<int> ans;
        if(n&1){
            n-=3;
            ans.pb(3);
        }
        while(n>0){
            ans.pb(2);
            n-=2;
        }
        cout << ans.size() << endl;
        for(auto x:ans){
            cout << x << " ";
        }
        cout << endl;

    }
    return 0;
}