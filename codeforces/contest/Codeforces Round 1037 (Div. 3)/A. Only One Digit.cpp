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
    while(t--){

        string s;
        cin >> s;
        if(s.size()==1){
            cout << s << endl;
            continue;
        } else{
            int mxn = INT_MAX;
            for(char c :s){
                int a = c-'0';
                mxn = min(mxn,a);
            }
            cout << mxn << endl;
        }

    }

    return 0;
}