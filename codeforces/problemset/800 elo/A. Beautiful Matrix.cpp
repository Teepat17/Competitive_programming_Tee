#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int rn=5;
    const int cn=5;

    int arr[rn][cn];
    pair<int,int> idx; 

    for(int i=0;i<rn; i++){
        for(int j=0; j<cn; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1) idx = {i,j};
        }
    }
    cout << abs(idx.first+1-3)+abs(idx.second+1-3);



    return 0;
}