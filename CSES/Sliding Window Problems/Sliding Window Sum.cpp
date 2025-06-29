#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<int> num(n,0);
    int x,a,b,c;
    cin >> x >> a >> b >> c;
    int sum = x;
    num[0] = x;
    for(int i=1; i<n; i++){
        num[i] = (a*num[i-1]+b)%c;
        if(i<k){
            sum += num[i];
        }
    }
    int l =0;
    int r = k;
    int xorr = sum;
    while(r<n){
        sum = sum - num[l] + num[r];
        xorr ^= sum;
        r++;
        l++;
    }
    cout << xorr;
}