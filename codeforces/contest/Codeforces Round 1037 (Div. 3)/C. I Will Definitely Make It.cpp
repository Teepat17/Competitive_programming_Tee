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

        int n,k;
        cin >> n >> k;
        VEC arr(n);
        FOR(0,n) cin >> arr[i];
        int val = arr[k-1];
        sort(all(arr));
        int maxdis = INT_MIN;
        FOR(0,n-1) maxdis = max(maxdis,arr[i+1]-arr[i]);

        cout << (maxdis <= val ? "YES" : "NO") << endl;

    }

    return 0;
}