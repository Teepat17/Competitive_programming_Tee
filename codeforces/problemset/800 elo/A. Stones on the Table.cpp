#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for(int i =1; i<n; i++){
        if(s[i] == s[i-1]){
            count++;
        }
    }
    cout << count; 
    return 0;
}