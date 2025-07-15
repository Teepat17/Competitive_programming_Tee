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

        int s,n;
        cin >> s >> n;
        vector <pii> arr(n);
        FOR(0,n){
            int a;
            int b;
            cin >> a >> b;
            arr[i] = {a,b};
        }
        sort(all(arr));
        FOR(0,n){
            if(s>=arr[i].F){
                s+= arr[i].S;
            } else{
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";

    }

    return 0;
}