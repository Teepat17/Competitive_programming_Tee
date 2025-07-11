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

    int n;
    cin >> n;
    if(n>1){       
        for(int i=1; i<n; i++){
            if(i%2 != 0) cout << "I hate that ";
            else cout << "I love that ";
        }
        cout << (n%2 == 0 ? "I love it" : "I hate it");
    } else cout << "I hate it";

    return 0;
}