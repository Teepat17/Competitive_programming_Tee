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
    //cin >> t;
    while(t--){

        int y , w;
        cin >> y >> w;
        int mx = max(y,w);
        int po = 7 - mx;

        if(po == 1) cout << "1/6";
        if(po == 2) cout << "1/3";
        if(po == 3) cout << "1/2";
        if(po == 4) cout << "2/3";
        if(po == 5) cout << "5/6";
        if(po == 6) cout << "1/1";

    }

    return 0;
}