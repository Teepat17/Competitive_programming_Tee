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
    //cin >> t;
    while(t--){

        int n;
        cin >> n;
        int m =0, c=0;
        FOR(0,n){
            int a ,b;
            cin >> a >> b;
            if(a>b) m++;
            else if(a<b) c++;
        }

        if(m>c) cout << "Mishka";
        else if(m<c) cout << "Chris";
        else cout << "Friendship is magic!^^";

    }

    return 0;
}