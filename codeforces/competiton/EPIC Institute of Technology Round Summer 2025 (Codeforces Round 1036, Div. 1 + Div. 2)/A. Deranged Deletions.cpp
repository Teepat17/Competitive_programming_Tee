#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> c(n);
        vector <int> b(n);
        for(int i=0; i<n; i++){
            cin >> c[i];
            b[i] = c[i];
        }
        sort(c.begin(),c.end());
        bool dera = false;
        while(!dera){
            vector<int> d(n);
            bool valid = true;
            for (int i = 0; i < n; i++) {
                d[i] = c[(i + 1) % n]; // เลื่อนแบบวงกลม
                if (d[i] == b[i]) {
                    valid = false;
                }
            }

            if (valid) {
                cout << "YES\n";
                cout << n << '\n';
                for (int i = 0; i < n; i++) cout << d[i] << ' ';
                cout << '\n';
                dera = true;
            } else {
                // ลบค่าซ้ำแล้วลองใหม่ หรือใช้วิธีสลับอื่น
                dera = true; // หรือให้ NO ถ้าไม่สามารถทำได้
                cout << "NO\n";
            }
        }
    }

    return 0;
}