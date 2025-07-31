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
#define VEC vector<int>
#define MOD 998244353

int count_valid(int pos, int n, VEC &s, VEC &perm, VEC &used, VEC &black, VEC &score) {
    if (pos == n) {
        FOR(0,n) {
            if (s[i] != -1 && s[i] != score[i]) return 0;
        }
        return 1;
    }

    int res = 0;
    FOR(0,n) {
        if (used[i]) continue;

        int closest = -1, dist = n + 1;
         {
            if (black[j]) {
                int d = abs(i - j);
                if (d < dist || (d == dist && j < closest)) {
                    dist = d;
                    closest = j;
                }
            }
        }

        if (pos > 0 && closest != -1) score[closest]++;
        used[i] = 1;
        black[i] = 1;
        perm[pos] = i;

        res += count_valid(pos + 1, n, s, perm, used, black, score);
        res %= MOD;

        used[i] = 0;
        black[i] = 0;
        if (pos > 0 && closest != -1) score[closest]--;
    }
    return res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        VEC s(n); FOR(0,n) cin >> s[i];

        VEC perm(n, -1), used(n, 0), black(n, 0), score(n, 0);
        cout << count_valid(0, n, s, perm, used, black, score) << '\n';
    }

    return 0;
}