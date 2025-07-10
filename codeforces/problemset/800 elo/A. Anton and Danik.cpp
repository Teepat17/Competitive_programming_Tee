#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int a =0;
    int d = 0;
    for(char c :s){
        if(c=='A') a++;
        else d++;
    }

    if(a==d) cout << "Friendship";
    else cout << (a>d ? "Anton" : "Danik");

    return 0;
}