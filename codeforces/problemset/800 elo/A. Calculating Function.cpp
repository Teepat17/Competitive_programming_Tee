#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2;
    } else{
        cout << (n-1)/2 - n;
    }

    return 0;
}