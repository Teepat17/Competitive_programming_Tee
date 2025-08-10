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
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        
        int c[3], m[3];
        cin >> c[0] >> m[0] >> c[1] >> m[1] >> c[2] >> m[2];

        for (int i = 0; i < 100; i++) {
            int from = i % 3;
            int to = (i + 1) % 3;

            int pour = min(m[from], c[to] - m[to]);
            m[from] -= pour;
            m[to] += pour;
        }

        cout << m[0] << '\n' << m[1] << '\n' << m[2] << '\n';

        
    }

    return 0;
}