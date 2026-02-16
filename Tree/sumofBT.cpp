// Sum of Binary Tree
// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1


/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(!root) return 0;
        int l=sumBT(root->left);
        int r = sumBT(root->right);
        int s = root->data+l+r;
        return s;
    }
};