#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> arr;
int n;
int minn = INT_MAX;

void recur(int i,int s,int p,bool check){
    if(i == n){
        if(check){
        minn = min(minn,abs(p-s));
        }
        
    }
    
    recur(i+1,s*arr[i].first,p+arr[i].second,true);

    recur(i+1,s,p,check);
}


int main(){
    cin >> n;
    arr.resize(n);
    for(int i =0; i<n; i++){
        cin >> arr[i].first >> arr[i].second; 
    }

    recur(0,1,0,false);

    cout << minn;
    return 0;
}