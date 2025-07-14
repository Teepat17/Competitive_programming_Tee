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

    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector <int> arr;
        for(intt i=0; i<s.size(); i++){
            if(s[i] != '0') arr.pb((s[i]-'0') * pow(10,s.size()-1-i));
        }
        cout << arr.size() << endl;
        for(intt i=0; i<arr.size(); i++) cout << arr[i] << ' ';
        cout << endl;
    }

    return 0;
}