#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string a, b;
    cin >> k >> a >> b;

    int n = -1, m = -1;
    int matchCount = 0;

    for (int i = 0; i < (int)a.size(); i++) {
        for (int j = 0; j < (int)b.size(); j++) {
            if (a[i] == b[j]) {
                matchCount++;
                if (matchCount == k) {
                    m = i;
                    n = j;
                    goto draw;
                }
            }
        }
    }

    cout << "error" << endl;
    return 0;

draw:
    for (int i = 0; i < (int)b.size(); i++) {
        if (i == n) {
            cout << a << endl;
        } else {
            cout << string(m, ' ') << b[i] << endl;
        }
    }
    //Anyway I use ai to really fix it out cuz idk how to fix that one testcaseT-T but it help me understand a lot btw
    //if I still miss that one testcase mean I give up for today Im eepy btw it's 11 pm now
    return 0;
}
