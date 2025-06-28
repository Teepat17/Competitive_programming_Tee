#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int cur = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > cur){
            break;
        }
        cur += arr[i];
    }
    cout << cur;
    return 0;
}