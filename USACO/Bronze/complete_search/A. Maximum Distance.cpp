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

    int n; cin >> n;
    VEC x(n); VEC y(n);
    FOR(0,n) cin >> x[i]; FOR(0,n) cin >> y[i];
    int mx = -1;

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            int a = pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2);
            mx = max(mx, a);
        }
    }

    cout << mx;

    return 0;
}