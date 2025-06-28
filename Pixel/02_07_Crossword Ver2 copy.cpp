#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    string a, b;
    size_t n, m, k, c = 0;
    bool f = false;

    cin >> k >> a >> b;
    size_t aa = a.size();
    size_t bb = b.size();

    if(k>aa || k >bb || k == 0){
        cout << "error";
        return 0;
    }
    else{
        for (size_t i = 0; i < aa; i++) {
            for (size_t j = 0; j < bb; j++) {
                if (a[i] == b[j]) {
                    c++;
                    if (c == k) {
                        m = j;
                        n = i;
                        f = true;
                        break;
                    }
                }
            }
            if(f) break;
        }

        if (!f) {
            cout << "error" << endl;
            return 0;
        }

    
        for (size_t i = 0; i < bb; i++) {
            if (i == m) {
                cout << a << endl;
                continue;
            }
            for (size_t j = 0; j < n; j++) { 
                cout << ' ';
            }
            cout << b[i] << endl;
        }
    }
        return 0;
}