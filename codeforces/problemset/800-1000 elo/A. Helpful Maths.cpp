#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector <int> arr;
    for(auto i : s){
        if(i == '1' || i == '2' || i == '3'){
            arr.push_back(i - '0' );
        }
    }
    sort(arr.begin(),arr.end());
    for(size_t i=0; i<arr.size(); i++){
        if(i<arr.size()-1){
            cout << arr[i] << '+';
        } else cout << arr[i];
    }

    return 0;
}