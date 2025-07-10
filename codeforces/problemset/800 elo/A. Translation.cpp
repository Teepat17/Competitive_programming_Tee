#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t;
    cin >> s >> t;
    string sr = s;
    reverse(sr.begin(),sr.end());

    cout << (t == sr ? "YES" : "NO");

    return 0;
}