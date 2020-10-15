//DFS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1000007;
vector<int> adj[N];
bool visited[N]={false};
void dfs(int s) {
    visited[s] = true;
    cout<<s<<" ";
    for(int i = 0;i < adj[s].size();++i)    {
        if(visited[adj[s][i]] == false)
            dfs(adj[s][i]);
    }
}

int main() {
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(int i = 0;i < edges;++i) {
        cin >> x >> y;
        //Undirected Graph
        adj[x].push_back(y);                   //Edge from vertex x to vertex y
        adj[y].push_back(x);                   //Edge from vertex y to vertex x
    }//Initialize all nodes as not visited

    for(int i = 1;i <= nodes;++i) {
        if(visited[i] == false)     {
            dfs(i);
        }
    }
    return 0;
}
