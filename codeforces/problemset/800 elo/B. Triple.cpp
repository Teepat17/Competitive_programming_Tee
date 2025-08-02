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
        VEC arr(n); FOR(0,n) cin >> arr[i];
        unordered_map<int,int> fq;
        FOR(0,n) fq[arr[i]]++;
        int cnt = 0;
        bool f = true;
        for(auto [k,f] : fq){
            if(f >= 3){
                cnt++;
                cout << k << endl;
                break;
            }
        }
        if(cnt == 0) cout << -1 << endl;

    }

    return 0;
}