#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) < k) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;

}