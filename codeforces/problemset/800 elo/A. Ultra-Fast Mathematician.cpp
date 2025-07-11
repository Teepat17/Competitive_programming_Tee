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

    string a;
    string b;
    cin >> a >> b;

    for(intt i =0; i<a.size(); i++){
        int aa = a[i] - '0';
        int bb = b[i] - '0';
        if(aa == bb) cout << 0;
        if(aa != bb) cout << 1;
    }

    return 0;
}