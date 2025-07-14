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

    string s;
    cin >> s;
    bool check = isupper(s[0]);
    bool checks = true;

    for(intt i=1; i<s.size(); i++){
        checks = isupper(s[i]) && checks;
    }

    if(!check && checks){
        cout << char(toupper(s[0]));
        for(intt i=1; i<s.size(); i++){
            cout << char(tolower(s[i]));
        }
    } else if(check && checks){
        for(char c : s){
            cout << char(tolower(c));
        }
    } 
    else cout << s;

    return 0;
}