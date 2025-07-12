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
    int count =0;
    int b100 = n/100;
    int b20 = (n-b100*100)/20;
    int b10 = (n-b100*100-b20*20)/10;
    int b5 =  (n-b100*100-b20*20-b10*10)/5;
    int b1 = (n-b100*100-b20*20-b10*10-b5*5)/1;
    count = b100+b20+b10+b5+b1;

    cout << count;

    return 0;
}