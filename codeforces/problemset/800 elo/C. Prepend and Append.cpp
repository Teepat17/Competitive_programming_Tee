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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    cin >> t;
    while(t--){

        int n; 
        string s; cin >> n >> s;
        int l =0, r = n-1;
        int cur = n;
        while(l<=r){
            if(s[l] == '1' && s[r] == '0') cur-= 2;
            else if(s[l] == '0' && s[r] == '1') cur -= 2;
            else break;

            l++;
            r--;
        }


        cout << cur << endl;

    }

    return 0;
}