// Course Schedule II
// https://www.geeksforgeeks.org/problems/course-schedule/1

class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<int> ans;
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        for(auto & v : prerequisites){
            adj[v[1]].push_back(v[0]);
            indegree[v[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        if(q.empty()) return {};
        while(!q.empty()){
            int p = q.front();
            q.pop();
            ans.push_back(p);
            for(int x : adj[p]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        if(ans.size()!=n) return {};
        return ans;
    }
};