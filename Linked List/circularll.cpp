#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertAtEnd(Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}
void print(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
        if(temp==head) return;;
    }
}
int main(){
    Node* head=NULL;
    insertAtEnd(head,5);
    insertAtEnd(head,50);
    insertAtEnd(head,25);
    insertAtEnd(head,35);
    print(head);
}