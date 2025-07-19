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

    set <int> c;

    int t =1;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        cout << ( (n&(n-1)) ==0 ? "NO" : "YES") << endl;
    }
    return 0;
}
