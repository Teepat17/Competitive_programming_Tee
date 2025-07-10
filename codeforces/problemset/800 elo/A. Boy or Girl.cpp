#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name;
    cin >> name;

    set <char> user(name.begin(),name.end());

    cout << (user.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}