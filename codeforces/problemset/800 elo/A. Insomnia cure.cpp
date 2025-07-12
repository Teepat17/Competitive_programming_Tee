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

    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int count =0;
    lp(i,1,d+1){
        if((i%k == 0 || i%l == 0 || i%m==0 || i%n==0)){
            count++;
        }
    }

    cout << count;

    return 0;
}