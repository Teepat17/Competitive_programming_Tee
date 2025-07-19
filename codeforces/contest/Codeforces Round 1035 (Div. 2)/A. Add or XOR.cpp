#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        const int MAX = 200;
        vector<int> dist(MAX + 1, LLONG_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[a] = 0;
        pq.push({0, a});

        while (!pq.empty()) {
            auto [cost, u] = pq.top();
            pq.pop();

            if (u == b) break;
            if (cost > dist[u]) continue;

            
            if (u + 1 <= MAX && dist[u + 1] > cost + x) {
                dist[u + 1] = cost + x;
                pq.push({dist[u + 1], u + 1});
            }

            
            int v = u ^ 1;
            if (v <= MAX && dist[v] > cost + y) {
                dist[v] = cost + y;
                pq.push({dist[v], v});
            }
        }

        if (dist[b] == LLONG_MAX) cout << -1 << '\n';
        else cout << dist[b] << '\n';
    }

    return 0;
}
