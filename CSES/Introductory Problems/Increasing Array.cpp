#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    int m=0;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i =1; i<n; i++){
        if(arr[i]<arr[i-1]){
            m += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << m;
}