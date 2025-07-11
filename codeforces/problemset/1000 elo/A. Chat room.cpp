#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string h = "hello";
    int k = 0;
    string s;
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        if(s[i] == h[k]) k++;
    }

    cout << (k==5 ? "YES" : "NO");

    return 0;
}