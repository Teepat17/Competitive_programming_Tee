#include <bits/stdc++.h>
using namespace std;
#define int long long
#define VEC vector<int>
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
#define pb push_back

vector<bool> prime(1e6+5, true);

void bp(int N) {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bp(1e6);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        int sq = sqrt(a);
        if (sq * sq == a && prime[sq]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    return 0;
}