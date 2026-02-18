// Predecessor and Successor
// https://www.geeksforgeeks.org/problems/predecessor-and-successor/1

/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> ans;
    void solve(Node* root){
        if(!root) return;
        solve(root->left);
        ans.push_back(root);
        solve(root->right);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        solve(root);
        Node* p = NULL;
        Node* q = NULL;
        for(int i=0;i<ans.size();i++){
            if(ans[i]->data<key){
                q=ans[i];
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]->data>key){
                p=ans[i];
                break;
            }
        }
        return {q,p};
        
    }
};