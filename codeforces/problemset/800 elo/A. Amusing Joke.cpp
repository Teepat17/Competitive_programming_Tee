#include <bits/stdc++.h>
using namespace std;
#define int long long
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

    string name,name2,s;
    cin >> name >> name2 >> s;
    unordered_map <char,int> cur , now;
    for(char c : name + name2) cur[c]++;
    for(char c : s) now[c]++;
    
    cout << (now == cur ? "YES" : "NO");
    return 0;
}