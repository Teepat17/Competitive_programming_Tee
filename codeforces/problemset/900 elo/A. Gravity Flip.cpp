#include <bits/stdc++.h>
using namespace std;
#define int long long
#define B begin()
#define E end()
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int,int>
#define intt size_t

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0 ; i<n; i++) cin >> arr[i];

    sort(all(arr));
    for(int i=0 ; i<n; i++) cout << arr[i] << ' ';

    return 0;
}