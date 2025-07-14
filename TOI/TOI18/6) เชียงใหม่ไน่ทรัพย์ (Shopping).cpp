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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

        int n,m;
        cin >> n >> m;
        vector <int> shop(n);
        vector <int> point(n);
        vector <int> paid(n);
        point[0] = 0;
        paid[0] = 0;

        FOR(1,n){
            cin >> shop[i];
            point[i] = point[i-1] + (shop[i] > -1)*abs(shop[i]);
            paid[i] += paid[i-1] + (shop[i] <= -1)*abs(shop[i]);
        }

        

    }

    return 0;
}