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

    int t =1;
    cin >> t;
    while(t--){

        int n; cin >> n;
        if((n/2)%2 != 0){
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;
            int even = (n+2)*(n/4);
            int odd = even - (n-3+1)*(n/2-1)/2;
            for(int i = 2; i<=n; i+= 2) cout << i << " ";
            for(int i = 1; i<=n-3; i+= 2) cout << i << " ";
            cout << odd << endl;
             
        }

    }

    return 0;
}