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

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n,c;
        cin >> n >> c;
        VEC arr(n);
        FOR(0,n)cin >> arr[i];
        sort(all(arr));
        int coins = 0;
        int k = 0;
        while(!arr.empty()){
            int freeTh = (k < 63 ? (c >> k) : 0LL);
            auto it = upper_bound(all(arr), freeTh);
            if(it != arr.begin()){
                arr.erase(prev(it));
            } else {
                coins++;
                arr.pop_back();
            }
            k++;
        }

        cout << coins << "\n";
    }

    return 0;
}