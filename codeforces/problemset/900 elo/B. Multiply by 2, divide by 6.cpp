/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector <int>

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    cin >> t;
    while(t--){

        int n; cin >> n;
        int cnt = 0;
        while(n != 1){
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                cnt = -1;
                break;
            }
        if (cnt != -1) cnt++;

        }

        cout << (n==1 ? cnt : -1) << endl;

    }

    return 0;
}