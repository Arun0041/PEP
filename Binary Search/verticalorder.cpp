// 987. Vertical Order Traversal of a Binary Tree
// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         queue<pair<TreeNode*,int>> q;
//         unordered_map<int,vector<int>> m;
//         int miin=INT_MAX,maax=INT_MIN;
//         q.push({root,0});
//         while(!q.empty()){
//             pair<TreeNode*,int> p=q.front();
//             q.pop();
//             m[p.second].push_back(p.first->val);
//             miin=min(miin,p.second);
//             maax=max(maax,p.second);
//             if(p.first->left){
//                 q.push({p.first->left,p.second-1});
//             }
//             if(p.first->right){
//                 q.push({p.first->right,p.second+1});
//             }
//         }
//         vector<vector<int>> ans;
//         for(int i=miin;i<=maax;i++){
//             sort(m[i].begin(),m[i].end());
//             ans.push_back(m[i]);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         if (!root) return {};
        
//         queue<tuple<TreeNode*, int, int>> q; 
//         // node, column, row
        
//         unordered_map<int, vector<pair<int,int>>> m;
//         int miin = INT_MAX, maax = INT_MIN;
        
//         q.push({root, 0, 0});
        
//         while (!q.empty()) {
//             auto [node, col, row] = q.front();
//             q.pop();
            
//             m[col].push_back({row, node->val});
            
//             miin = min(miin, col);
//             maax = max(maax, col);
            
//             if (node->left) {
//                 q.push({node->left, col - 1, row + 1});
//             }
//             if (node->right) {
//                 q.push({node->right, col + 1, row + 1});
//             }
//         }
        
//         vector<vector<int>> ans;
        
//         for (int i = miin; i <= maax; i++) {
//             auto &vec = m[i];
            
//             // sort by row first, then by value
//             sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
//                 if (a.first == b.first)
//                     return a.second < b.second;
//                 return a.first < b.first;
//             });
            
//             vector<int> temp;
//             for (auto &p : vec) {
//                 temp.push_back(p.second);
//             }
            
//             ans.push_back(temp);
//         }
        
//         return ans;
//     }
// };


class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // column -> row -> multiset of values
        map<int, map<int, multiset<int>>> nodes;
        
        // queue: node, column, row
        queue<tuple<TreeNode*, int, int>> q;
        q.push({root, 0, 0});
        
        while (!q.empty()) {
            auto [node, col, row] = q.front();
            q.pop();
            
            nodes[col][row].insert(node->val);
            
            if (node->left) {
                q.push({node->left, col - 1, row + 1});
            }
            
            if (node->right) {
                q.push({node->right, col + 1, row + 1});
            }
        }
        
        vector<vector<int>> ans;
        
        for (auto &p : nodes) {  // column wise
            vector<int> temp;
            
            for (auto &q : p.second) {  // row wise
                temp.insert(temp.end(), q.second.begin(), q.second.end());
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};
