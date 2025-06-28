#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i =0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int avg = arr[n/2];
    int count = 0;
    for(int i=0; i<n; i++){
        count += abs(avg-arr[i]);
    }
    cout << count;
    return 0;
}