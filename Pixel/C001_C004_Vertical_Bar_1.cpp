#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> num;
    int x;
    while (cin >> x) {
        num.push_back(x);
    }

    int n = *max_element(num.begin(),num.end());
    int m = num.size();
    for(int i =n; i>0; i--){
        for(int j=0; j<m; j++){
            if(num[j] == i){
                cout << "* ";
                num[j]--;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}