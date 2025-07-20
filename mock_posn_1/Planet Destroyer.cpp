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
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        int sum = 0, mn = LLONG_MAX;
        FOR(0,n){
            FOR(0,n){
                int x;
                cin >> x;
                sum += x;
                mn = min(mn, x);
            }
        }

        cout << sum - mn << "\n";


    }

    return 0;
}