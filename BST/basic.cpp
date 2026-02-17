// A bst is a binary tree in which each node has at most two children, and for each node, 
// the left child's value is less than the node's value, and the right child's value is greater than 
// the node's value. This property allows for efficient searching, insertion, and deletion operations. 
// The code above implements a basic BST with insertion and in-order traversal functionalities.

// Binary Search Tree (BST) implementation in C++
#include <iostream>
using namespace std;
// Definition of a node in the BST using class

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// Function to insert a new value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}
// Function to perform in-order traversal of the BST
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int main() {
    Node* root = nullptr;
    // Insert values into the BST
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 8);
    // Perform in-order traversal to display the BST
    cout << "In-order Traversal of the BST: ";
    inOrder(root);
    cout << endl;
    return 0;
}
