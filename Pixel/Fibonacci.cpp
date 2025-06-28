#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int n;
    cin >> n;
    vector <int> fibo(n+1,0);
    fibo[1] = 1;
    
    for(int i=2; i<n+1; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    for(int i=0; i<n+1; i++){
        if(i<n) cout << fibo[i] << ", ";
        else cout << fibo[i];
    }
    return 0;
}