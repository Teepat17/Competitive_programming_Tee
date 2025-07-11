#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count =0;
    while(n--){
        int p;
        int cap;
        cin >> p >> cap;
        if(cap - p >= 2) count++;
    }

    cout << count;

    return 0;
}