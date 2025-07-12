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
    getline(cin, s); 

    set<char> ss;
    for (char c : s) {
        if (isalpha(c)) { 
            ss.insert(c);
        }
    }

    cout << ss.size() << '\n';
    return 0;
}