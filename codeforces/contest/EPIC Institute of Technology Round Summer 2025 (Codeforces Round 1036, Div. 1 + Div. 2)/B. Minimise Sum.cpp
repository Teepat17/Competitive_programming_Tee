#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n + 2), p(n + 2), suf(n + 3), c0(n + 2);

    for (int i = 1; i < n; i++) cin >> a[i];

    // Build prefix minimums
    p[1] = a[1];
    for (int i = 2; i < n; i++)
        p[i] = min(p[i - 1], a[i]);

    int S0 = 0;
    for (int i = 1; i < n; i++)
        S0 += p[i];

    // Suffix sums
    suf[n + 1] = 0;
    for (int i = n; i >= 1; i--)
        suf[i] = suf[i + 1] + a[i];

    // Find first index where prefix min stops decreasing
    int f = n;
    for (int i = 2; i < n; i++) {
        if (p[i] == p[i - 1]) {
            f = i;
            break;
        }
    }

    // Build delta of prefix mins
    for (int i = 2; i < n; i++)
        c0[i] = p[i - 1] - p[i];

    int best = 0, M = LLONG_MAX;
    for (int j = 2; j < n; j++) {
        int sv;
        if (c0[j]) {
            sv = suf[j] - a[j];
        } else {
            M = min(M, c0[j - 1]);
            sv = suf[j] - min(a[j], M);
        }
        best = max(best, sv);
    }

    cout << S0 - best << '\n';
}