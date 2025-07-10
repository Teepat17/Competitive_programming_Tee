#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int u =0;
    int l =0;

    for(char c : s){
        if(isupper(c)) u++;
        else l++;
    }

    if(l<u){
        for(size_t i=0; i<s.size(); i++){
            s[i] = toupper(s[i]);
        }
    } else for(size_t i=0; i<s.size(); i++) s[i] = tolower(s[i]);
        
    cout << s;

    return 0;
}