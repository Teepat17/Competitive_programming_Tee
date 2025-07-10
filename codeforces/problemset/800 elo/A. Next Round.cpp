#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    k--;
    int count =0;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i =0; i<n; i++){
        if(arr[i] >= arr[k] && arr[i]>0){
            count++;
        }
    }
    cout << count;

    return 0;
}