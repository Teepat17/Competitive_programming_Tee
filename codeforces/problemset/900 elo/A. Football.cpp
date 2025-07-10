#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int c = 0;
    int c0 = 0;
    for(size_t i=0; i<s.size(); i++) {
        if(s[i] == '1'){
            c0 = 0;
            c++;
        } else{
            c = 0;
            c0++;
        }

        if(c == 7 || c0 == 7) break;
    }

    cout << (c == 7 || c0 == 7 ? "YES" : "NO");

    return 0;
}