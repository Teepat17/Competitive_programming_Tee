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

        vector <string> ss = {"qqwertyuiopp","aasdfghjkl;;","zzxcvbnm,.//"};

        char c; cin >> c;
        vector <char> ans(256);
        if(c == 'R'){
            for(auto s : ss){
                for(intt i = 1; i<s.size()-1; i++) ans[s[i]] = s[i-1];
            }
        } else {
            for(auto s : ss){
                for(intt i = 1; i<s.size()-1; i++) ans[s[i]] = s[i+1];
            }
        }

        string s; cin >> s;
        for(auto c : s){
            cout << ans[c];
        }
        
    }

    return 0;
}