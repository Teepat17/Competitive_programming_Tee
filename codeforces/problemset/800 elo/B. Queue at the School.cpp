#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        string cur = s;
        for(int i=0;i<n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                cur[i] = 'G';
                cur[i+1] = 'B';
            }
        }
        s = cur;
    }
    cout << s;

    return 0;
}