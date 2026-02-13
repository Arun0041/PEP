#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
int countLeaf(Node* root){
    if(!root) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int x = countLeaf(root->left);
    int y= countLeaf(root->right);
    return x+y;
}
int main(){
    Node* a = new Node(5);
    Node* b = new Node(7);
    Node* c = new Node(9);
    Node* d = new Node(1);
    Node* e = new Node(6);
    Node* f = new Node(22);
    Node* g = new Node(10);
    a->left=b;
    a->right=c;
    b->left=d;
    d->right=g;
    c->left=e;
    c->right=f;

    cout<<countLeaf<<endl;
}