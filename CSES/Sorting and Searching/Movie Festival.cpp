#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin >> n;
    vector <pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        arr[i] = {b, a};
    }
    sort(arr.begin(),arr.end());
    auto cur = arr[0];
    int count =1;
    for(int i=1; i<n; i++){
        if(cur.first <= arr[i].second){
            count++;
            cur = arr[i];
        }
    }
    cout << count;
}