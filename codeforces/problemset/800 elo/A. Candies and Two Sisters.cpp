#include <bits/stdc++.h>
using namespace std;
#define int long long
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

    int t; 
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        if(n<3){
            cout << 0 << endl;
            continue;
        } else{
            int ans = n - (n+1)/2;
            cout << (n%2==0 ? ans-1 : ans) << endl;
        }
    }

    return 0;
}