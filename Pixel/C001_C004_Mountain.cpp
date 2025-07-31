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

        VEC arr(1005,-1);
        FOR(0,1000) cin >> arr[i];
        FOR(0,1000){
            int a = arr[i];
            if(a == -1) break;
            for(int j = 0; j< a; j++){
                for(int c = j; c<a; c++){
                    cout << ' ';
                }
                for(int s = -1; s<j; s++){
                    cout << '*';
                }
                for(int c2 = j; c2<a; c2++){
                    cout << ' ';
                }
                cout << endl;
            }
        }


    }

    return 0;
}