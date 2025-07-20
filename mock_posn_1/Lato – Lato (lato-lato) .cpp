/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector <int>
#define ld long double
#define cosd(x) cosl((ld)(x))

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;
    while(t--){

    ld se, t, ome, fe, g, A, w, l;
    cin >> se >> t >> ome >> fe >> g >> A >> w >> l;

    ld sq = sqrtl(pow(ome + fe, 2) - ((g - A * pow(w, 2) * cosd(w * t)) / l));
    ld res = se / expl(t * sq);

    cout << fixed << setprecision(10) << res;


    }

    return 0;
}