#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;
    while(true){
        y++;
        string s = to_string(y);
        set <char> ss(s.begin(),s.end());
        if(ss.size()==4) break;
    }
    cout << y;

    return 0;
}