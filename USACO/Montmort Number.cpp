#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;

    vector<long long> a(N + 1);
    a[0] = 1;
    if (N >= 1) a[1] = 0;

    for (int k = 2; k <= N; ++k) {
        a[k] = ((k - 1) * (a[k - 1] + a[k - 2])) % M;
    }

    for (int k = 1; k <= N; ++k) {
        cout << a[k];
        if (k != N) cout << " ";
    }
    cout << endl;

    return 0;
}