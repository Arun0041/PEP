// Is Binary Tree Heap
// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1

/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int countNodes(Node* root){
        if(!root) return 0;
        return 1+(countNodes(root->left) +  countNodes(root->right));
    }
    bool isCBT(Node* tree,int idx,int count){
        if(!tree) return true;
        if(idx >= count) return false;
        else{
            bool left = isCBT(tree->left,2*idx+1,count);
            bool right = isCBT(tree->right,2*idx+2,count);
            return left && right;
        }
    }
    bool solve(Node* root){
        if (!root->left && !root->right) return true;
        if (!root->right) {
            return root->data >= root->left->data;
        } else {
            return (root->data >= root->left->data && 
                    root->data >= root->right->data &&
                    solve(root->left) && 
                    solve(root->right));
        }
    }
    bool isHeap(Node* tree) {
        if (!tree) return true;
        int count = countNodes(tree);
        return (isCBT(tree,0,count) && solve(tree));
    }
};