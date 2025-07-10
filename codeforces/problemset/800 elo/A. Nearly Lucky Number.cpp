#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int luck = 0;
    for(size_t i = 0; i<s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            luck++;
        }
    }

    cout << (luck==7 || luck==4 ? "YES" : "NO");

    return 0;
}