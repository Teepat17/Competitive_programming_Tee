#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> ingredients;
int min_diff = INT_MAX;

void solve(int index, int sour, int bitter, bool used) {
    if (index == n) {
        if (used) { 
            min_diff = min(min_diff, abs(sour - bitter));
        }
        return;
    }

    
    solve(index + 1, sour * ingredients[index].first, bitter + ingredients[index].second, true);

    
    solve(index + 1, sour, bitter, used);
}

int main() {
    cin >> n;
    ingredients.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> ingredients[i].first >> ingredients[i].second;
    }

    solve(0, 1, 0, false);
    
    cout << min_diff << endl;
    return 0;
}