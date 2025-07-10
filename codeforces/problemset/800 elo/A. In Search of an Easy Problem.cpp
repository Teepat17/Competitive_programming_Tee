#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    bool c = false;
    while(n--){
        int a;
        cin >> a;
        if(a==1) c = true;
    }

    cout << (c ? "HARD" : "EASY");

    return 0;
}