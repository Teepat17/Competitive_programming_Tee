#include <bits/stdc++.h>
using namespace std;
#define int long long
#define B begin()
#define E end()
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int,int>
#define intt size_t

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int level , n1,n2;
    cin >> level >> n1;
    vector <int> arr(n1);
    for(int i=0; i<n1; i++) cin >> arr[i];
    cin >> n2;
    arr.resize(n1+n2);
    for(int i=n1; i<n1+n2; i++) cin >> arr[i];
    
    set <int> plevel(all(arr));

    cout << (plevel.size() == level ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}