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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int c1 = 0, c2 = 0;

        FOR(0, n){
            int a;
            cin >> a;
            if(a == 1) c1++;
            else c2++;
        }

        int sum = c1 + 2 * c2;

        if(sum % 2 != 0 || (sum / 2) % 2 != 0 && c1 == 0){

            cout << "NO\n";
        } else {

            cout << "YES\n";
        }

    }

    return 0;
}