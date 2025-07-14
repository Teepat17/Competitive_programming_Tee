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

    int n;
    cin >> n;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    
    lp(i,0,n){
        int a;
        cin >> a;
        if(a == 1) a1++;
        if(a == 2) a2++;
        if(a==3) a3++;
        if(a==4) a4++;
    }

    int taxi = a4;
    if(a3>a1){
        taxi += a1;
        a3 = a3 - a1; 
        a1 = 0;
    }else if(a1>=a3){
        taxi += a3;
        a1 = a1-a3;
        a3 = 0;
    }

    taxi += a2 / 2;
    a2 %= 2;

    if (a2 == 1) {
        if (a1 >= 2) {
            taxi++;
            a1 -= 2;
        } else {
            taxi++;
            a1 = 0;
        }
    }

    taxi += a1 / 4;
    if (a1 % 4 != 0) taxi++;
    

    cout << taxi + a3;

    return 0;
}