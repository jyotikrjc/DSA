#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Dijkstra(vector<pair<int,int>> G[], int n, int source) {
    priority_queue<pair<int,int>> pq; // <dist,vertex>
    int dist[n];
    for(int i=0; i<n; i++) dist[i] = INT_MAX;

    pq.push(make_pair(0, source));
    dist[source] = 0;

    while(!pq.empty()) {
        int v = pq.top().second;
        pq.pop();
        for(int x=0; x<G[v].size(); x++) {
            int weight = G[v][x].second;
            if(dist[G[v][x].first] > dist[v] + weight) {
                dist[G[v][x].first] = dist[v] + weight;
                pq.push(make_pair(dist[v] + weight, G[v][x].first));
            }
        }
    }
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < n; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main() {
    int V = 9;
    vector<pair<int,int>> g[9];
    addEdge(g, 0, 1, 4);
    addEdge(g, 0, 7, 8);
    addEdge(g, 1, 2, 8);
    addEdge(g, 1, 7, 11);
    addEdge(g, 2, 3, 7);
    addEdge(g, 2, 8, 2);
    addEdge(g, 2, 5, 4);
    addEdge(g, 3, 4, 9);
    addEdge(g, 3, 5, 14);
    addEdge(g, 4, 5, 10);
    addEdge(g, 5, 6, 2);
    addEdge(g, 6, 7, 1);
    addEdge(g, 6, 8, 6);
    addEdge(g, 7, 8, 7);

    Dijkstra(g,9,0);
    return 0;
}
