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

        int n; string s; cin >> n >> s;
        unordered_map <char,int> fi;
        int cnt = 0;
        for(char c:s){
            if(fi[c] >= 1) cnt++;
            else{
                fi[c]++;
                cnt+=2;
            }
        }

        cout << cnt << endl;

    }

    return 0;
}