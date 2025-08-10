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
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x , y , m; cin >> x >> y >> m;
    int mx = -1;

    for(int i =0; i*x <= m; i++){
        for(int j =0; j*y + i*x <= m; j++){
            mx = max(i*x + j*y , mx);
        }
    }

    cout << mx;

    return 0;
}