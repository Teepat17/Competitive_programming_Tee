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

    int t=1;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        cout << n/2 +1 << ' ' << m/2+1 << endl;
    }

    return 0;
}