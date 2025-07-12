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

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        vector <int> ans(n);
        lp(i,0,n) cin >> arr[i];
        bool muti = false;
        ans[0] = arr[0];
        lp(i,1,n){
            int negaans = ans[i-1] - arr[i];
            int posians = ans[i-1] + arr[i];
            if(negaans >= 0 && arr[i] != 0){
                cout << -1 << endl;
                muti = true;
                break;
            } else ans[i] = posians;
        }
        if(!muti){
            lp(i,0,n) cout << ans[i] << ' ';
            cout << endl;
        }
    } 

    return 0;
}