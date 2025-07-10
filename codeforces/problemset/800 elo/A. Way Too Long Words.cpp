#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <string> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i].size() <= 10){
            cout << arr[i] << endl;
        } else{
            int count = arr[i].size() -2;
            cout << arr[i][0] << count << arr[i][arr[i].size()-1] << endl;
        }
    }

    return 0;
}