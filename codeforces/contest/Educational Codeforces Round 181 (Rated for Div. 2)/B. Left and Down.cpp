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

        int a, b, k; 
        cin >> a >> b >> k;
        int g = gcd(a, b);
        int dx = a / g, dy = b / g;
        if (dx <= k && dy <= k) {
            cout << 1 << endl;
        } else {
            set<pii> used;
            while (a > 0 || b > 0) {
                int ddx = min(a, k);
                int ddy = min(b, k);
                used.insert({ddx, ddy});
                a -= ddx;
                b -= ddy;
            }
            cout << used.size() << '\n';
        }




    }

    return 0;
}