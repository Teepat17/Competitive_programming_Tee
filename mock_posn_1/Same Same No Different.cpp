/* Author : lnw_tee */
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define pii pair<int,int>
#define VEC vector<int>
#define FOR(x,n) for(int i=x; i<n; i++)

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string l, a, b;
        getline(cin ,l);
        stringstream s(l);
        getline(s , a, ',');
        getline(s, b);

        unordered_map<string,int> aa , bb;

        int n = a.size(), m = b.size();

        for(int i =0; i<n; ){  
            if(isupper(a[i])){
                string e;
                e.pb(a[i]);
                if(i < n-1 && islower(a[i+1])) e.pb(a[i+1]);
                i++;
                int cnt = 0;
                while(i < n && isdigit(a[i])){
                    cnt = cnt*10 + (a[i] - '0');
                    i++;
                }
                if(cnt == 0) cnt = 1;
                aa[e]+= cnt;
            } else i++;
        }

        for(int i = 0; i<m;){
            if(isupper(b[i])){
                string e;
                e.pb(b[i]);
                if(i < m-1 && islower(b[i+1])) e.pb(b[i+1]);
                i++;
                int cnt = 0;
                while(i < m && isdigit(b[i])){
                    cnt = cnt*10 + (b[i] - '0');
                    i++;
                }
                if(cnt == 0) cnt = 1;
                bb[e]+= cnt;
            } else i++;
        }

        cout << (aa == bb ? "YES" : "NO") << endl;
    }

    return 0;
}