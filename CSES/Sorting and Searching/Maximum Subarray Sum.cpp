#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    int cur = arr[0];
    int maxsum = arr[0];
    for(int i=1; i<n; i++){
        cur = max(arr[i],cur+arr[i]);
        maxsum = max(cur,maxsum);
    }
    cout << maxsum;
    return 0;
}