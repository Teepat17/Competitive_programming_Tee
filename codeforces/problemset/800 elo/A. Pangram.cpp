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
#define lp(i,n) for(int i=0; i<n; i++)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s;
    cin >> s;
    lp(i, n) s[i] = tolower(s[i]);
    set <char> ss(all(s));
    cout << (ss.size() == 26 ? "YES" : "NO");


    return 0;
}