#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    size_t i = 0;
    while (i < s.size()) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            s.erase(i, 1);
        } else {
            ++i;
        }
    }

    string ans;

    for(char c : s){
        ans.push_back('.');
        ans.push_back(c);
    }

    cout << ans;
    return 0;
}