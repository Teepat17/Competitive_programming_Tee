#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        actual_sum += arr[i];
    }
    
    cout << expected_sum - actual_sum << endl;
    
    return 0;
}