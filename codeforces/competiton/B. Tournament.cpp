#include <bits/stdc++.h>
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int _=0; _<t; _++){
        int n,j,k,idx;
        cin >> n >> j >>k;
        j--;
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        auto pla = arr[j];
        int s = n;
        int l = 0;
        int r = n-1;
        while(s > k){
            if(l == j) l++;
            if(r == j) r--;
            if(arr[r] < arr[l]){
                //arr.erase(arr.begin()+r);
                r--;
            } else{
                //arr.erase(arr.begin()+l);
                l++;
            }
            s--;
        }
        if(find(arr.begin()+l,arr.begin()+r+1,pla) != arr.end()){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    return 0;
}