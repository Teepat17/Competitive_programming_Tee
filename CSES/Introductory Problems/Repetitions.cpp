#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    string dna;
    int maxx =LLONG_MIN ,cur=0;
    cin >> dna;
    for(int i = 0; i<dna.size(); i++){
        if(dna[i]==dna[i+1]) cur++;
        else{
            maxx = max({maxx,cur});
            cur = 0;
        }
    }
    cout << maxx+1;
    return 0;
}