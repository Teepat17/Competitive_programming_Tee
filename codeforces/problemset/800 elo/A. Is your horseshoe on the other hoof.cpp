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

    set <int> dress;
    for(int i=0; i<4; i++){
        int a;
        cin >> a;
        dress.insert(a);
    }

    cout << 4-dress.size();

    return 0;
}