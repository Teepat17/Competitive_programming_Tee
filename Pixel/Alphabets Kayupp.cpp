#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    char c;
    int n;
    cin >> c >> n;
    cout << char('A' + (c - 'A' + n) % 26);
    return 0;
}