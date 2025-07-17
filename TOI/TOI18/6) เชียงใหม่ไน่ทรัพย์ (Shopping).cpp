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

    int t = 1;
    // cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        VEC point(n + 1, 0);
        VEC cost(n + 1, 0);
        VEC shop(n + 1, 0);

        FOR(1, n + 1) {
            cin >> shop[i];
            cost[i] = cost[i - 1] + (shop[i] < 0 ? -shop[i] : 0);
            point[i] = point[i - 1] + (shop[i] >= 0 ? shop[i] : 0);
        }

        FOR(0, m) {
            int sta, mey;
            cin >> sta >> mey;
            sta++;

            mey += cost[sta - 1];
            int l = sta, r = n + 1;
            while (l < r) {
                int mid = (l + r) / 2;
                if (cost[mid] >= mey) r = mid;
                else l = mid + 1;
            }

            cout << point[l-1] - point[sta - 1] << '\n';
        }

    }

    return 0;
}