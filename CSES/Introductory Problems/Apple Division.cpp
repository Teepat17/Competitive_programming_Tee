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

VEC arr;
int n;
int ans = 0;

int subset(int sum1, int sum2, int idx){
    if(idx == n) return abs(sum1-sum2);

    return min(subset(sum1+arr[idx],sum2,idx+1),subset(sum1,sum2+arr[idx],idx+1));
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

        cin >> n;
        arr.resize(n); FOR(0,n) cin >> arr[i];
        cout << subset(0,0,0);

     }

    return 0;
}