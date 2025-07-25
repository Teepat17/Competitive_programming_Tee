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

        VEC arr(5);
        FOR(1,5) cin >> arr[i];
        string s; cin >> s;
        int cnt = 0;
        for(char c : s){
            int a = c - '0';
            cnt += arr[a];
        }
        cout << cnt << endl;

    }

    return 0;
}