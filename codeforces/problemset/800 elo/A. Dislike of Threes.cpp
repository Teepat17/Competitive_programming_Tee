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
    cin >> t;
    VEC ans;
    FOR(1,1700){
        string a = to_string(i);
        if(stoi(a)%3 != 0 && (a[a.size()-1]-'0') != 3){
            ans.pb(i);
        }
    }
    while(t--){

        int n;
        cin >> n;
        cout << ans[n-1] << endl;

    }

    return 0;
}