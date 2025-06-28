#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        auto it = tickets.upper_bound(t); // First ticket strictly greater than t
        if (it == tickets.begin()) {
            cout << -1 << "\n"; // No ticket affordable
        } else {
            --it; // Best ticket within budget
            cout << *it << "\n";
            tickets.erase(it); // Remove the ticket
        }
    }
    return 0;
}