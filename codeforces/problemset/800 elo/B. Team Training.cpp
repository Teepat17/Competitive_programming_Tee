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

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(all(a));
        reverse(all(a));

        int cnt = 0;
        int team_size = 0;
        for(int i = 0; i < n; i++) {
            team_size++;
            if(team_size * a[i] >= x) {
                cnt++;          
                team_size = 0;   
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}