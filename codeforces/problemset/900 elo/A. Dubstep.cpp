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

    string result;
    for (size_t i = 0; i < s.size(); ) {
        if (i <= s.size() - 3 && s.substr(i, 3) == "WUB") {
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            i += 3;
        } else {
            result += s[i++];
        }
    }

    
    stringstream ss(result);
    string word;
    while (ss >> word) cout << word << ' ';
    cout << '\n';

    return 0;
}