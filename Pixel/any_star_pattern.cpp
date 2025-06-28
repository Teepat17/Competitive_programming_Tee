#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int D,M;
    cin >> D >> M;
    string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int si = 0, sd = 3;
    for (int i = 1; i < M; i++) {
        if (i == 2) {
            si += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            si += 30;
        } else {
            si += 31;
        }
    }
    si += D;
    cout << days[(si + sd - 1) % 7] << endl;
}