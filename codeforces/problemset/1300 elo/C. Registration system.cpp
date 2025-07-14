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

    int n;
    cin >> n;
    unordered_map<string, int> key;
    lp(i,0,n){
        string s;
        cin >> s;
        if(key.find(s) == key.end()){
            key[s] = 0;
            cout << "OK" << endl;
        } else {
            key[s]++;
            cout << s << key[s] << endl;
        }

    }

    return 0;
}