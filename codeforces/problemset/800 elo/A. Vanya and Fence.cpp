#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    int cost = 0;
    while(n--){
        int a;
        cin >> a;
        if(a<= k) cost++;
        else cost += 2; 
    }

    cout << cost;

    return 0;
}