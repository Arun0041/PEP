// Height of Binary Tree
// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(!root) return -1;
        int l = height(root->left);
        int r = height(root->right);
        int h = 1+max(l,r);
        return h;
    }
};