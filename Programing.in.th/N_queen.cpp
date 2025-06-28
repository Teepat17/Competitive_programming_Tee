#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
bool col[17], diag1[2 * 17], diag2[2 * 17];

void backtrack(int row) {
    if (row == n) { 
        ans++;
        return;
    }

    for (int c = 0; c < n; c++) {
        if (col[c] || diag1[row - c + n - 1] || diag2[row + c]) continue; 
        
        col[c] = diag1[row - c + n - 1] = diag2[row + c] = true;
        backtrack(row + 1);
        col[c] = diag1[row - c + n - 1] = diag2[row + c] = false;
    }
}

int main() {
    cin >> n;
    backtrack(0); 
    cout << ans << endl;
}