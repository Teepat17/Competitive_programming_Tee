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

        int n; cin >> n;
        int cnt = 0;
        int mx = INT_MIN;
        FOR(0,n){
            int a; cin >> a;
            if(a == 0) cnt++;
            else cnt = 0;
            mx = max(mx,cnt); 
        }

        cout << mx << endl;

    }

    return 0;
}