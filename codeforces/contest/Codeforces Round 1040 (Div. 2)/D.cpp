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

struct btree {
    int n;
    VEC f;
    btree(int _n = 0) : n(_n), f(n + 1, 0) {}
    void init(int _n) { n = _n; f.assign(n + 1, 0); }
    void upd(int i) { for (; i <= n; i += i & -i) f[i]++; }
    int query(int i) { int s = 0; for (; i > 0; i -= i & -i) s += f[i]; return s; }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        VEC p(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];

        
        VEC invr(n + 1), gl(n + 1);
        btree bit(n);

        int invp = 0;
        bit.init(n);
        for (int i = n; i >= 1; i--) {
            invr[i] = bit.query(p[i] - 1);
            invp += invr[i];
            bit.upd(p[i]);
        }

        bit.init(n);
        FOR(1,n+1) {
            gl[i] = (i - 1) - bit.query(p[i]);
            bit.upd(p[i]);
        }

        
        int sum_neg = 0;
        FOR(1,n+1) {
            int D = (n - i) - invr[i] - gl[i];
            if (D < 0) sum_neg += D;
        }

        int ans = invp + sum_neg;
        cout << ans << endl;
    }

    return 0;
}
