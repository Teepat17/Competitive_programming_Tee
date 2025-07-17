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
        int mxn = INT_MAX;
        int mex = INT_MIN;
        int count = 0;
        int b; cin >> b;
        mxn = b;
        mex = b;
        FOR(0,n-1){
            int a;
            cin >> a;
            if(a < mxn){
                mxn = a;
                count ++;
            } else if(a > mex){ mex = a; count++;}
        }
        cout << count;
    }

    return 0;
}