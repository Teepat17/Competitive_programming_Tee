#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector<int>

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        int n; cin >> n;
        VEC arr(n); FOR(0, n) cin >> arr[i];

        VEC sorted = arr;
        sort(all(sorted));

        VEC diff;
        FOR(0, n) {
            if (arr[i] != sorted[i]) {
                diff.pb(i);
            }
        }

        if (diff.empty()) {
            cout << "yes\n1 1\n";
        } else {
            int l = diff.front(), r = diff.back();
            reverse(arr.begin() + l, arr.begin() + r + 1);
            if (arr == sorted) {
                cout << "yes\n" << l + 1 << ' ' << r + 1 << '\n';
            } else {
                cout << "no\n";
            }
        }
    }

    return 0;
}