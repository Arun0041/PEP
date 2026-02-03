// 56. Merge Intervals
// https://leetcode.com/problems/merge-intervals/description/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int m=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<m;i++){
            int s=intervals[i][0];
            int e=intervals[i][1];
            if(!ans.empty() && s<=ans.back()[1]){
                ans.back()[1]=max(e,ans.back()[1]);
            }
            else{
                ans.push_back({s,e});
            }
        }
        return ans;
    }
};