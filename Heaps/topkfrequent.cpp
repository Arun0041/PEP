// 347. Top K Frequent Elements
// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i : nums){
            m[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto& p : m){
            pq.push({p.second,p.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};