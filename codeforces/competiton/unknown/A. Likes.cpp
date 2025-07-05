#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> posi(n);
        for(int i=0; i<n; i++){
            cin >> posi[i];
        }
        sort(posi.begin(),posi.end());
        int countmax =0;
        int countmin =0;
        for(int i=n-1; i>=0; i--){
            if(posi[i]>0){
                countmax++;
            } else if(posi[i] <0) countmax--;
            cout << countmax << " ";
        }
        cout << endl;
        int l=0 ,r=n-1;
        while (l<=r)
        {
            if(posi[r] >0 && (posi[l]>0 || countmin==0)){
                r--;
                countmin++;
                cout << countmin << ' ';
                continue;
            } else if(posi[l] < 0){
                l++;
                countmin--;
                cout << countmin << ' ';
            }

        }
        
        cout << endl;
    }
    return 0;
}