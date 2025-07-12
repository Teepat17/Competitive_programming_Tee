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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for(auto c:s){
        if(c == 'H' || c =='Q' || c == '9'){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}