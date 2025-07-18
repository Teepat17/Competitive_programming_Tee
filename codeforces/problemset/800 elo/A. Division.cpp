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

        int n;
        cin >> n;
        if(n <= 1399) cout << "Division 4" << endl;
        else if(n>=1400 && n <= 1599) cout << "Division 3" << endl;
        else if(n>= 1600 && n <= 1899) cout << "Division 2" << endl;
        else if(n>= 1900) cout << "Division 1" << endl;

    }

    return 0;
}