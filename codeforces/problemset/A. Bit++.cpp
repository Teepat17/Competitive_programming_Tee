#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string arr[n];
    int x = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        for(auto j : arr[i]){
            if(j=='X') continue;
            if(j=='-') {
                x--; 
                break;
            }
            if(j=='+'){
                x++;
                break;
            }
        }
    }
    cout << x << endl;

    return 0;
}