#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) count++;
    }

    cout << count;

    return 0;
}