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

        int n; cin >> n;
        FOR(1,n+1){
            for(int j = i; j<n; j++){
                cout << ' ';
            }
            for(int c= 0; c<i; c++){
                cout << '*';
            }
            for(int r = 0; r<i-1; r++){
                cout << '*';
            }

            cout << endl;
        }

    }

    return 0;
}