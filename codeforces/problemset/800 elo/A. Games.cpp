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
    vector <pii> arr(n);
    lp(i,0,n){
        int a,b;
        cin >> a >> b;
        arr[i] = {a,b};
    }
    int count =0;
    lp(i,0,n){
        lp(j,0,n){
            if(arr[i].F == arr[j].S && i != j ) count++;
        }
    }
    cout << count;
    return 0;
}