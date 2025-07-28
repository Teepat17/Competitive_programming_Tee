/*
Author : lnw_tee
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define intt size_t
#define FOR(x,n) for(int i=x; i<n; i++)
#define VEC vector <int>

bool safe_with(const deque<int>& last, int x) {
    if (last.size() < 4) return true;
    int a0 = last[0], a1 = last[1], a2 = last[2], a3 = last[3];
    if (a0 < a1 && a1 < a2 && a2 < a3 && a3 < x) return false;
    if (a0 > a1 && a1 > a2 && a2 > a3 && a3 > x) return false;
    return true;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        VEC p(n);
        FOR(0,n) cin >> p[i];
        int l = 0, r = n - 1;
        deque<int> last;
        string ans;
        ans.reserve(n);

        for (int step = 0; step < n; step++) {
            bool okL = safe_with(last, p[l]);
            bool okR = safe_with(last, p[r]);
            char pick = '-';

            if (okL && !okR) pick = 'L';
            else if (okR && !okL) pick = 'R';
            else if (okL && okR) {
                deque<int> Dl = last;
                if (Dl.size() == 4) Dl.pop_front();
                Dl.push_back(p[l]);
                bool fL = false;
                if (l+1 <= r) {
                    if (safe_with(Dl, p[l+1]) && safe_with(Dl, p[r]))
                        fL = true;
                } else fL = true;

                deque<int> Dr = last;
                if (Dr.size() == 4) Dr.pop_front();
                Dr.push_back(p[r]);
                bool fR = false;
                if (l <= r-1) {
                    if (safe_with(Dr, p[l]) && safe_with(Dr, p[r-1]))
                        fR = true;
                } else fR = true;

                if (fL && !fR)      pick = 'L';
                else if (fR && !fL) pick = 'R';
                else                          pick = 'L'; 
            }
            else pick = 'L';

            if (pick == 'L') {
                if (last.size() == 4) last.pop_front();
                last.push_back(p[l]);
                ans.push_back('L');
                l++;
            } else {
                if (last.size() == 4) last.pop_front();
                last.push_back(p[r]);
                ans.push_back('R');
                r--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}