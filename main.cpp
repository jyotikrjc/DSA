//BFS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1000007;
vector<int> adj[N];
bool visited[N]={false};
queue<int> q;
int distanc[N];
int x;
void bfs(int s) {
    visited[x] = true;
    distanc[x] = 0;
    q.push(x);
    while (!q.empty()) {
        int s = q.front(); q.pop();
        cout<<s<<" ";
        for (auto u : adj[s]) {
            if (visited[u]) continue;
            visited[u] = true;
            distanc[u] = distanc[s]+1;
            q.push(u);
        }
    }
}

int main() {
    int nodes, edges, m, n, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(int i = 0;i < edges;++i) {
        cin >> m >> n;
        //Undirected Graph
        adj[m].push_back(n);                   //Edge from vertex x to vertex y
        adj[n].push_back(m);                   //Edge from vertex y to vertex x
    }//Initialize all nodes as not visited
    cin>>x;
    bfs(x);
    return 0;
}