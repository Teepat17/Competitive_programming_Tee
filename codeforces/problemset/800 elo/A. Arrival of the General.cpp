#include <bits/stdc++.h>
using namespace std;
#define int long long
#define B begin()
#define E end()
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define lp(i,x,n) for(int i=x; i<n; i++)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> arr(n);
    pii mn = {INT_MAX,0};
    pii mxn = {INT_MIN,0};
    lp(i,0,n){
        cin >> arr[i];
        if(arr[i] <= mn.F) mn = {arr[i],i};
        if(arr[i] > mxn.F) mxn = {arr[i],i};
    }

    int dis_mn = n-1-mn.S;
    int dis_mxn =  mxn.S;
    cout << (mn.S < mxn.S ? dis_mn + dis_mxn - 1 : dis_mn + dis_mxn);

    return 0;
}