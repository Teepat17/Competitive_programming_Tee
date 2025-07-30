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

        int n,k; cin >> n >> k;
        VEC arr(n); FOR(0,n) cin >> arr[i];

        int cnt = 0, cur = 0;

        FOR(1,n){
            if(arr[i]<arr[i-1]) cur++;
            else cur = 0;

            cnt = max(cnt,cur);
        }
        if(cnt >0) cnt++;

        cout << (k == 1 && cnt != 0 ? "NO" : "YES") << endl;

    }

    return 0;
}