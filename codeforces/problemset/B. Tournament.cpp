#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,j,k;
        cin >> n >> j >> k;
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(k>1){
            cout << "YES\n";
        } else {
            if(arr[j-1] == *max_element(arr.begin(),arr.end())) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}