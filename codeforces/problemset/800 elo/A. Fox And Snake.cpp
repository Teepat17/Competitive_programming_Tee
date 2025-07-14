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

    int n,m;
    cin >> n >> m;
    bool left = false;
    lp(i,1,n+1){
        if(i%2==1){
            lp(j,0,m) cout << '#';
            cout << endl;
        } else if(i%2==0 && !left){
            lp(j,0,m-1) cout << '.';
            cout << '#' <<endl;
            left = true;
        } else {
            cout << '#';
            lp(j,0,m-1) cout << '.';
            cout << endl;
            left = false;
        }
    }

    return 0;
}