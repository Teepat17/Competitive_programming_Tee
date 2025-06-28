#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    deque <int> arr;
    cin >> n;
    arr.push_back(n);
    while(true){
        if(n%2==0){
            n = n/2;
        } else if(n == 1){
            break;
        } else {
            n = n*3 +1;
        }
        arr.push_back(n);
    }
    for(auto i : arr){
        cout << i << ' ';
    }
}
