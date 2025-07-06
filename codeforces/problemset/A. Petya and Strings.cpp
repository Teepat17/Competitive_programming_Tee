#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1) c = tolower(c);
    for (char &c : s2) c = tolower(c);

    if (s1 < s2) cout << -1;
    else if (s1 > s2) cout << 1;
    else cout << 0;

    return 0;
}