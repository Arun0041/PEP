// 938. Range Sum of BST
// https://leetcode.com/problems/range-sum-of-bst/description/

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
    void inorder(TreeNode* root,int &ans,int l,int h){
        if(!root) return;
        if(root->val >=l && root->val<= h){
            ans+=root->val;
        }
        inorder(root->left,ans,l,h);
        inorder(root->right,ans,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        inorder(root,ans,low,high);
        return ans;
    }
};