// 404. Sum of Left Leaves
// https://leetcode.com/problems/sum-of-left-leaves/description/

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
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int c= 0;
        if (root->left &&!root->left->left && !root->left->right){
            c+=root->left->val;
        }
        c+=sumOfLeftLeaves(root->left);
        c+=sumOfLeftLeaves(root->right);
        return c;
    }
};