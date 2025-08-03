/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector <int>

string s;
VEC used(26,0);
vector <string> ans;

void permu(const string &cur=""){
    if(cur.size() == s.size()){
        ans.pb(cur);
        return;
    }

    FOR(0,26){
        if(used[i] > 0){
          used[i]--;
          permu(cur+(char)(i+'a'));  
          used[i]++;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    for(char c : s) used[c - 'a']++;

    permu();

    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << endl;
    }

    return 0;
}