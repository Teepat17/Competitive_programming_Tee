#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> cos(n);
    vector<int> apn(m), app(m);
    
    for (int i = 0; i < n; i++) cin >> cos[i];
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        apn[i] = a - k;
        app[i] = a + k;
    }
    
    sort(cos.begin(), cos.end());
    sort(apn.begin(), apn.end());
    sort(app.begin(), app.end());

    int count = 0, j = 0;
    
    for (int i = 0; i < n; i++) {
        while (j < m && app[j] < cos[i]) j++;
        if (j < m && apn[j] <= cos[i] && app[j] >= cos[i]) {
            count++;
            j++;
        }
    }

    cout << count;
    return 0;
}