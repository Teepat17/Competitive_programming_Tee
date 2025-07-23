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
        int cnt = 0;
        FOR(0,3){
            if(s[i] == 'a' && i != 0) cnt--;
            if(s[i] == 'b' && i != 1) cnt--;
            if(s[i] == 'c' && i != 2) cnt--;
        }

        cout << (cnt < -2 ? "NO" : "YES") << endl;

    }

    return 0;
}