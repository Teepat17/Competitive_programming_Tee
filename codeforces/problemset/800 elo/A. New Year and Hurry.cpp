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
    //cin >> t;
    while(t--){

        int n,k;
        cin >> n >> k;
        int t = 240 - k;
        int sum = 0;
        int count = 0;
        FOR(1,n+1){
            sum+= i*5;
            if(sum > t) break;
            count++;
        }
        cout << count;

    }

    return 0;
}