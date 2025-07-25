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

bool is_persq(int n){
    int a = sqrt(n);

    return a*a == n;
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    cin >> t;
    while(t--){

        string a;
        cin >> a;
        int n = 0;
        FOR(0,4) n += (a[i]-'0') * pow(10, 3-i);
        if(!is_persq(n)) cout << -1 << endl;
        else{
            int k = sqrt(n);
            cout << k/2 << ' ' << k-k/2 << endl;
        }

    }

    return 0;
}