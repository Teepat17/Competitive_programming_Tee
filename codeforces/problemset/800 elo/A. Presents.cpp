#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int ans[n];
    for(int i=0; i<n; i++){
        ans[arr[i] - 1] = i+1;
    } 
    for(int i=0; i<n; i++) cout << ans[i] << ' ';

    return 0;
}