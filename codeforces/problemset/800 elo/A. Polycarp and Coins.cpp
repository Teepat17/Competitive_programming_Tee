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
        int c1=0, c2=0, cur = n/3, left = n%3;
        c1 = cur; c2 = cur;
        if(left == 1) c1++;
        else if(left == 2) c2++;

        cout << c1 << ' ' << c2 << endl;


    }

    return 0;
}