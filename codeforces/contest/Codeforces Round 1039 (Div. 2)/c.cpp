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
const int num = 4e18; 

struct SegTree {
    int n;
    VEC t;

    explicit SegTree(int m) : n(m), t(4 * n + 4, num) {}

    void update(int v, int l, int r, int pos, int val) {
        if (l == r) {
            t[v] = val;
            return;
        }
        int mid = (l + r) >> 1;
        if (pos <= mid) update(v << 1, l, mid, pos, val);
        else            update(v << 1 | 1, mid + 1, r, pos, val);
        t[v] = min(t[v << 1], t[v << 1 | 1]);
    }

    int query(int v, int l, int r, int ql, int qr) {
        if (ql > qr) return num;
        if (ql <= l && r <= qr) return t[v];
        int mid = (l + r) >> 1;
        int res = num;
        if (ql <= mid) res = min(res, query(v << 1, l, mid, ql, qr));
        if (qr >  mid) res = min(res, query(v << 1 | 1, mid + 1, r, ql, qr));
        return res;
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        VEC b(n + 1);
        FOR(1, n + 1) cin >> b[i];

        SegTree st(n);
        vector<char> alive(n + 1, true);
        FOR(1, n + 1) st.update(1, 1, n, i, b[i]);

        priority_queue<int> pq;
        FOR(1, n + 1) pq.push(i);

        bool c = true;
        while (!pq.empty()) {
            int i = pq.top(); pq.pop();
            if (!alive[i]) continue;

            int bi = b[i];
            int pev = (i > 1) ? st.query(1, 1, n, 1, i - 1) : num;

            if (i > 1 && pev * 2 <= bi) {
                c = false;
                break;
            }

            int sub = (i > 1) ? min(pev, bi) : bi;
            bi -= sub;

            if (bi > 0) {
                b[i] = bi;
                st.update(1, 1, n, i, bi);
                pq.push(i);
            } else {
                alive[i] = false;
                st.update(1, 1, n, i, num);
            }
        }

        cout << (c ? "YES" : "NO") << endl;
    }

    return 0;
}