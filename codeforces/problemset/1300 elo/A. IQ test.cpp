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
#define lp(i,x,n) for(int i=x; i<n; i++)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <pii> odd;
    vector <pii> even;
    
    lp(i,0,n){
        int a;
        cin >> a;
        if(a%2!=0) odd.pb({a,i+1});
        else even.pb({a,i+1});
    }

    cout << (odd.size() == 1 ? odd[0].S : even[0].S);
    return 0;
}