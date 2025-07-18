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
        int cnt1 = 0 , cnt2 = 0;
        FOR(0,3){
            cnt1 += s[i] - '0';
        }
        FOR(3,6){
            cnt2 += s[i] - '0';
        }

        cout << (cnt1 == cnt2 ? "YES" : "NO") << endl;

    }

    return 0;
}