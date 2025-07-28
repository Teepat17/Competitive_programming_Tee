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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        VEC p(n + 2), nxt(n + 2);
        FOR(1, n + 1) cin >> p[i];

        stack<int> st;
        FOR(1, n + 1) {
            while (!st.empty() && p[st.top()] < p[i]) {
                nxt[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()) {
            nxt[st.top()] = n + 1;
            st.pop();
        }

        int ans = 0;
        FOR(1, n + 1) ans += i * (nxt[i] - i);
        cout << ans << '\n';
    }

    return 0;
}
