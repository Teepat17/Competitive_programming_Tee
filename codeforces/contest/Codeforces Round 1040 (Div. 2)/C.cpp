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

struct DSU {
    int n;
    VEC p;
    DSU(int _n): n(_n), p(n+1) { iota(all(p), 0); }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        p[b] = a;
        return true;
    }
};


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    cin >> t;
    while(t--){

        int n; cin >> n;
        struct E { int a, b, w, idx; };
        vector <E> e(n);
        int maxNode = 0;

        FOR(0,n) {
            cin >> e[i].a >> e[i].b;
            e[i].w = e[i].b - e[i].a;
            e[i].idx = i + 1;
            maxNode = max({maxNode, e[i].a, e[i].b});
        }

        sort(all(e), [](E &x, E &y) {
            return x.w > y.w;
        });

        DSU d(maxNode);
        VEC res;
        for (auto &x : e) {
            if (d.unite(x.a, x.b))
                res.pb(x.idx);
        }

        cout << res.size() << endl;
        for (int i = 0; i < res.size(); ++i) cout << res[i] << (i+1<(int)res.size() ? ' ':'\n');


    }

    return 0;
}