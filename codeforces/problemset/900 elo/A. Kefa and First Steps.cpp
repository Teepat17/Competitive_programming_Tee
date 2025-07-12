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
    int mxn = 1;
    if(n>0){
        int b;
        cin >> b;
        int cur = 1;
        
        lp(i,1,n){
            int a;
            cin >> a;
            if(a>=b){
                cur++;        
            } else cur = 1;

            b = a;
            mxn = max(cur,mxn);
        }
    }
    cout << mxn;

    return 0;
}