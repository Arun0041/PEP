// Prerequisite Tasks
// https://www.geeksforgeeks.org/problems/prerequisite-tasks/1


class Solution {
  public:
    // bool dfs(int node,vector<vector<int>> & adj, vector<int>& visited,vector<int>& rec){
    //     visited[node]=1;
    //     rec[node]=1;
    //     for(auto& neighbour : adj[node]){
    //         if(!visited[neighbour]){
    //             if(dfs(neighbour,adj,visited,rec)){
    //                 return true;
    //             }
    //         }
    //         else if(rec[neighbour]){
    //             return true;
    //         }
    //     }
    //     rec[node] = 0;
    //     return false;
    // }
    bool bfs(vector<int>& indegree,vector<vector<int>>& adj,int N){
        queue<int> q;
        int count = 0;
        for(int i = 0; i < N; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        if(q.empty()) return false;
        while(!q.empty()){
            int p = q.front();
            q.pop();
            count++;
            for (int x : adj[p]) {
                indegree[x]--;
                if (indegree[x] == 0)
                    q.push(x);
            }
        }
        return count==N;
    }
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>> adj(N);
        vector<int> indegree(N,0);
        for(auto &v : prerequisites){
            adj[v.second].push_back(v.first);
            indegree[v.first]++;
        }
        // dfs
        // vector<int> visited(N,0);
        // vector<int> rec(N,0);
        // for(int i=0;i<N;i++){
        //     if(!visited[i]){
        //         if(dfs(i,adj,visited,rec)){
        //             return false;
        //         }
        //     }
        // }
        // return true;
        
        
        // bfs
        return bfs(indegree,adj,N);
    }
};