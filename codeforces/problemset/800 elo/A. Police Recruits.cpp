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
        int po = 0;
        int c = 0;
        FOR(0,n){
            int a;
            cin >> a;
            if(a>=0){
                po += a;
            } else{
                if(po > 0) po--;
                else c++;
            }
        }
        cout << c << endl;

    }

    return 0;
}