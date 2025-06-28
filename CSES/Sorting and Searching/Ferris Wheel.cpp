#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end()); // Sort weights in ascending order

    int i = 0, j = n - 1, gondolas = 0;
    
    while (i <= j) {
        if (p[i] + p[j] <= x) { // Pair if within the weight limit
            i++; // Move left pointer (lighter child)
        }
        j--; // Move right pointer (heavier child always rides)
        gondolas++; // Count the gondola used
    }

    cout << gondolas;
    return 0;
}