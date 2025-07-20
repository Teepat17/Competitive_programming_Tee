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
        int n,q;
        cin >> n;
        vector<VEC> arr(n,VEC(6));
        FOR(0,n) for(int j=0; j<6; j++) cin >> arr[i][j];

        cin >> q;
        vector<VEC> qus(q,VEC(12));
        FOR(0,q) for(int j=0; j<12; j++) cin >> qus[i][j];

        for(int qq = 0; qq < q; qq++){
            int cnt = 0;
            FOR(0,n){
                bool ok = true;
                for(int j = 0; j < 6; j++){
                    int lo = qus[qq][j*2], hi = qus[qq][j*2+1];
                    if(arr[i][j] < lo || arr[i][j] > hi) ok = false;
                }
                if(ok) cnt++;
            }
            cout << cnt << "\n";
        }
    }


    return 0;
}