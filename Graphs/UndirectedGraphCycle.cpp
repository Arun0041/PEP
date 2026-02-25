// Undirected Graph Cycle
// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
    bool dfs(vector<vector<int>>& res,int prev, vector<bool>& visited,int node){
        if(visited[node]) return true;
        visited[node]=true;
        for(int i : res[node]){
            if(i!=prev){
                if(dfs(res,node,visited,i)) return true;;
            }
        }
        return false;
    }
    // bool bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    //     queue<int> q;
    //     unordered_map<int,int> parent;
    
    //     visited[start] = true;
    //     q.push(start);
    //     parent[start] = -1;
    
    //     while(!q.empty()) {
    //         int node = q.front();
    //         q.pop();
    
    //         for(int i : adj[node]) {
    //             if(!visited[i]) {
    //                 visited[i] = true;
    //                 q.push(i);
    //                 parent[i] = node;
    //             }
    //             else if(parent[node] != i) {
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
    
        vector<vector<int>> adj(V);
        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    
        vector<bool> visited(V, false);
    
        // for(int i = 0; i < V; i++) {
        //     if(!visited[i]) {
        //         if(bfs(i, adj, visited))
        //             return true;
        //     }
        // }
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                if(dfs(adj,-1,visited,i))
                    return true;
            }
        }
        return false;
    }
};