#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count =0;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum>=2) count++;
    }
    cout << count;
    return 0;
}