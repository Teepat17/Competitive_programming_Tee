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

        int n;
        cin >> n;
        unordered_map <string,int> fq;
        for(int k=0; k<n; k++){
            string s;
            cin >> s;
            fq[s]++;
        }
        int mx = INT_MIN;
        for(auto p : fq){
            mx = max(mx,p.S);
        }

        for(auto p : fq){
            if(p.S == mx) cout << p.F;
        }

    }

    return 0;
}