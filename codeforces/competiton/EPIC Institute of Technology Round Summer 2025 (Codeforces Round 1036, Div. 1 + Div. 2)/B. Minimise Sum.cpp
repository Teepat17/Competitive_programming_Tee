#include <bits/stdc++.h>
using namespace std;
#define int long long

int get_prefix_min_sum(const vector<int>& a) {
    int sum = a[0], curr = a[0];
    for (int i = 1; i < a.size(); ++i) {
        curr = min(curr, a[i]);
        sum += curr;
    }
    return sum;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;

        int res = get_prefix_min_sum(a);

        int idx = max_element(a.begin(), a.end()-1) - a.begin();

        for (int j = idx + 1; j < n; ++j) {
            int ai = a[idx], aj = a[j];
            a[idx] = ai + aj;
            a[j] = 0;

            res = min(res, get_prefix_min_sum(a));

            a[idx] = ai; a[j] = aj;
        }

        cout << res << '\n';
    }

    return 0;
}
