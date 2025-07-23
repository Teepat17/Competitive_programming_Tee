/* Author : lnw_tee */
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
#define VEC vector<int>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define COUNT(x,d) ((x)/(d))

int good(int x) {
    int bad = 0;
    bad += COUNT(x, 2) + COUNT(x, 3) + COUNT(x, 5) + COUNT(x, 7);
    bad -= COUNT(x, 6) + COUNT(x, 10) + COUNT(x, 14) + COUNT(x, 15) + COUNT(x, 21) + COUNT(x, 35);
    bad += COUNT(x, 30) + COUNT(x, 42) + COUNT(x, 70) + COUNT(x, 105);
    bad -= COUNT(x, 210);
    return x - bad;
}

int32_t main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--) {
        int l, r; cin >> l >> r;
        cout << good(r) - good(l - 1) << endl;
    }
    return 0;
}