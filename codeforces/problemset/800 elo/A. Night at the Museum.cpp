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

        string s; cin >> s;
        int cnt = 0;
        int n = (int)s.size();
        FOR(0,n){
            if(i==0){
                cnt += min(abs(s[i] - 'a'), (26 - abs(s[i] - 'a')));
            } else cnt += min(abs(s[i] - s[i-1]), (26 - abs(s[i] - s[i-1])));
        }
        
        cout << cnt << endl;

    }

    return 0;
}