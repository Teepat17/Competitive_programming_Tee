#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int bob,li;
    cin >> li >> bob;
    bool high = false;

    int i =0;

    while(!high){
        li *= 3;
        bob *= 2;
        i++;
        if(li > bob) high = true;
    }

    cout << i;

    return 0;
}