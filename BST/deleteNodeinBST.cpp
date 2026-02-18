// 450. Delete Node in a BST
// https://leetcode.com/problems/delete-node-in-a-bst/

// Deleting Nodes From A BST :-
// Case 1 : A Leaf Node.
// Case 2 : Having Only One Child Node.
// Case 3 : Having Both Left And Right Child Node.

// Solution :-
// In Case 1 : We Can Directly Replace The Node With A Null Pointer.
// In Case 2 : We Can Directly Replace The node With Its Child Node.
// In Case 3 : We Can Directly Replace The Value Of The Node With Its In-Order Predecessor/Successor
//             After Deleting The Respective In-Order Predecessor/Successor.

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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key > root->val){
            root->right = deleteNode(root->right,key);
        }
        else{
            //case  1 : Leaf Node
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            //case 2: only one child exist
            if(!root->left){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if(!root->right){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            //case 3 :  both child exist
            TreeNode* child = root->left;
            while(child->right){
                child = child->right;
            }
            root->val = child->val;
            root->left=deleteNode(root->left,child->val);
            return root;
        }
        return root;
    }
};