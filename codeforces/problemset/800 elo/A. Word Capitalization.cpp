#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    if(islower(s[0])){
        s[0] = (char)toupper(s[0]);
    }

    cout << s;
    return 0;
}