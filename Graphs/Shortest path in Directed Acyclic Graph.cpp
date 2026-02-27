Shortest path in Directed Acyclic Graph
Given a directed acyclic graph (DAG) with weighted edges, find the shortest path from a given source vertex to all other vertices in the graph.
To find the shortest path from a given source vertex to all other vertices in a directed acyclic graph (DAG), we can use a topological sort of the graph. The algorithm works as follows:
1. Perform a topological sort of the DAG.
2. Initialize a distance array with infinity for all vertices except the source vertex, which is initialized to 0.
3. Traverse the vertices in topologically sorted order and update the distance to each adjacent vertex if a shorter path is found.
Here is the implementation in C++:
#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
void topologicalSort(int v, vector<vector<pair<int, int>>> &adj, vector<bool> &visited, stack<int> &st) {
    visited[v] = true;
    for (auto &edge : adj[v]) {
        int u = edge.first;
        if (!visited[u]) {
            topologicalSort(u, adj, visited, st);
        }
    }
    st.push(v);
}
vector<int> shortestPathDAG(int V, vector<vector<pair<int, int>>> &adj, int src) {
    stack<int> st;
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            topologicalSort(i, adj, visited, st);
        }
    }
    vector<int> dist(V, numeric_limits<int>::max());
    dist[src] = 0;
    while (!st.empty()) {
        int v = st.top();
        st.pop();
        if (dist[v] != numeric_limits<int>::max()) {
            for (auto &edge : adj[v]) {
                int u = edge.first;
                int weight = edge.second;
                if (dist[v] + weight < dist[u]) {
                    dist[u] = dist[v] + weight;
                }
            }
        }
    }
    return dist;
}