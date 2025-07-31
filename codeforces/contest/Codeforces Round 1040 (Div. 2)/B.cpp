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

        int n,s; cin >> n >> s;
        unordered_map <int,int> key;
        VEC arr(n); FOR(0,n){cin >> arr[i]; key[arr[i]]++;}
        int sum = accumulate(all(arr),0LL);
        int tar = s - sum;
        if(tar < 0 || tar == 1){
            bool f = true;
            FOR(0,key[0]){
                if(!f) cout << ' ';
                cout << 0;
                f = false;
            }
            FOR(0,key[2]){
                if(!f) cout << ' ';
                cout << 2;
                f = false;
            }
            FOR(0,key[1]){
                if(!f) cout <<  ' ';
                cout << 1;
                f = false;
            }
            cout << endl;
        } else cout << -1 << endl;

        

    }

    return 0;
}