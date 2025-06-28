#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
char maze[1005][1005];

void dfs(int r, int c){
    if(r<0 || c<0 || r>=n || c>=m || maze[r][c] == '#') return;
    if(maze[r][c] == 'B') return;

}

int32_t main(){
    cin >> n >> m;
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> maze[i][j];
        }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(maze[i][j] == 'A'){
                dfs(i,j);
            }
        }
    }
}