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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    int half = (n+1)/2;
    if(k <= half){
        cout << 1+(k-1)*2;
    } else {
        cout << 2+((k - half)-1)*2;
    }

    return 0;
}