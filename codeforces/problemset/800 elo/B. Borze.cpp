#include <bits/stdc++.h>
using namespace std;
#define int long long
#define B begin()
#define E end()
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define lp(i,x,n) for(int i=x; i<n; i++)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    intt n = s.size();
    int count =0;
    for (intt i = 0; i < n;) {
        if (s[i] == '.') {
            cout << 0;
            i++;
        } else if (s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i += 2;
        } else if (s[i] == '-' && s[i+1] == '-') {
            cout << 2;
            i += 2;
        }
    }
    return 0;
}