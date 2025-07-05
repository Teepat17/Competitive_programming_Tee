#include <bits/stdc++.h>
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--){
        int n,x1,y1,x2,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int sum =0;
        int b = INT_MIN;
        bool mach = true;
        for(int i =0; i<n; i++){
            int a;
            cin >> a;
            if(a != b && b != INT_MIN) mach = false;
            b = a;
            sum += a;
        }
        int dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

        if(sum >= dis && (dis > 0 || (mach == true && n%2==0))){
            cout << "Yes" << endl;
        } else cout << "No" << endl;

    }
    return 0;
}