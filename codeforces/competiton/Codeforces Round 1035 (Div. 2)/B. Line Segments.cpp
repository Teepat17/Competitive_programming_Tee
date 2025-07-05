#include <bits/stdc++.h>
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,x1,y1,x2,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        
        bool mach = true;
        int a;
        cin >> a;
        int b = a;
        int sum =a;
        int dist = a;
        for(int i =1; i<n; i++){
            cin >> a;
            if(a != b) mach = false;
            b = a;
            sum += a;
            dist -= a;
        }
        double dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        if(n==1 && dis == 1){
            cout << "No" << endl;
        }
        if(sum<dis || dist>dis){
            cout << "No" << endl;
        } else{
            if(sum >= dis && (dis > 0 || (dis == 0 && mach == true && n%2==0))){
                cout << "Yes" << endl;
            } else cout << "No" << endl;
        }


    }
    return 0;
}