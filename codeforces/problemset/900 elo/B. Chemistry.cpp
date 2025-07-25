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

        int n ,k; cin >> n >> k;
        string s; cin >> s;
        unordered_map <char,int> key;
        for(char c : s) key[c]++;
        int cnt =0;
        for(auto [c,n] : key){
            if(n%2!=0) cnt++;
        }

        int re = n-k;

        if(re%2==0){
            cout << (cnt <= k ? "YES" : "NO") << endl;
        } else {
            cout << (cnt -1 <=k ? "YES" : "NO") << endl;
        }
        

    }

    return 0;
}