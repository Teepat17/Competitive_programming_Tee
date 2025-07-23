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

        string a;
        cin >> a;
        string s;
        s.pb(a[0]); s.pb(a[1]);
        
        if(a.size() < 4){
            cout << s << endl;
        } else{
            for(intt i =3; i<a.size(); i+=2) s.pb(a[i]);
            cout << s << endl;
        }
    }

    return 0;
}