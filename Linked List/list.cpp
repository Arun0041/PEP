#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val,Node* next=NULL){
        this->val=val;
        this->next = next;
    }
};
int main(){
    Node *head=new Node(5);
    Node *node1 = new Node(6);
    head->next=node1;
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}