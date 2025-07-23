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
    cin >> t;
    while(t--){

        string s;
        cin >> s;

        if(s.find("NTT") == string::npos && s.find("FFT") == string::npos){
            cout << s << endl;
        } else {
            string n = "" , f = "" , T = "" , ans = "";

            for(char c : s){
                if(c == 'N') n.pb(c);
                else if(c == 'F') f.pb(c);
                else if(c == 'T') T.pb(c);
                else ans.pb(c);
            }

            cout << (ans + T + f + n) << endl;

        }
        
        
    }

    return 0;
}