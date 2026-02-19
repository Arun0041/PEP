// Top View of Binary Tree
// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

class Solution {
  public:
        vector<int> topView(Node *root) {
        if (!root) return {};
        
        map<int, int> m;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int hd = it.second;
            if (m.find(hd) == m.end()) {
                m[hd] = node->data;
            }
            
            if (node->left)
                q.push({node->left, hd - 1});
            if (node->right)
                q.push({node->right, hd + 1});
        }
        
        vector<int> ans;
        for (auto &p : m) {
            ans.push_back(p.second);
        }
        
        return ans;
    }
};