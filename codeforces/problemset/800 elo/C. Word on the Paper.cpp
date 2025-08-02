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

        char arr[10][10];
        string s = "";
        FOR(0,8){
            for(int j = 0; j<8; j++){
                cin >> arr[i][j];
                if(arr[i][j] != '.') s.pb(arr[i][j]);
            }
        }
        cout << s << endl;
    }

    return 0;
}