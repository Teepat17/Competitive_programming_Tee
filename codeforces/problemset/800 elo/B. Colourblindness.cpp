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

        int n; cin >> n;
        string arr,arr2; cin >> arr >> arr2;
        int cnt = 0;
        FOR(0,n){
            if(arr[i] == arr2[i]) cnt++;
            else if((arr[i] == 'B' && arr2[i] == 'G') || (arr[i] == 'G' && arr2[i] == 'B')) cnt++;
        }

        cout << (cnt == n ? "YES" : "NO") << endl;


    }

    return 0;
}