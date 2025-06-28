#include<bits/stdc++.h>
using namespace std;
#define int long long
char room[1005][1005];
int croom=0;
int n,m;

void dfs(int r, int c){
    if(r>=n || c>=m || r<0 || c<0 || room[r][c] == '#') return;

    room[r][c] = '#';
    dfs(r+1,c);
    dfs(r-1,c);
    dfs(r,c+1);
    dfs(r,c-1);
}

int32_t main(){
    cin >> n >> m;
    for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
            cin >> room[i][j];
        }
    }
    for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
            if(room[i][j] == '.'){
                croom++;
                dfs(i,j);
            }
        }
    }
    cout << croom;
}