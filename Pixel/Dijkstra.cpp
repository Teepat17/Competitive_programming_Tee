#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<vector<pair<int,int>>> adj;

vector<int> dij(int n,int s){
    set <pair<int,int>> pq;
    vector<int> dist(n+1,INT_MAX);

    dist[s] = 0;
    pq.insert({0,s});

    while(!pq.empty()){
        auto t = pq.begin();
        int u = t->second;
        pq.erase(t);

        for(auto edge : adj[u]){
            int v = edge.first;
            int w = edge.second;

            if(dist[u]+w < dist[v]){
                pq.erase({dist[v],v});
                dist[v]= dist[u]+w;
                pq.insert({dist[v],v});
            }
        }
    }
    return dist;
}

int main() {
    cin >> n >> m >> s >> t;
    adj.resize(n+1);

    for(int i =0; i<m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }

    vector<int> dist = dij(n,s);

    if(dist[t] == INT_MAX) cout << -1;
    else cout << dist[t];

}