#include <bits/stdc++.h>
using namespace std;
#define int long long
#define B begin()
#define E end()
#define F first
#define S second

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    int sum = accumulate(arr.begin(),arr.end(),0LL);
    sort(arr.B, arr.E);
    int cur = 0;
    int count =0;
    for(int i=n-1;i>=0;i--){
        cur += arr[i];
        count++;
        if(cur > sum-cur){
            break;
        }
    }

    cout << count;

    return 0;
}