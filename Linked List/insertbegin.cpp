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
void insertAtBegin(Node*& head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void deleteAtEnd(Node*& head){
    if(head==NULL) return;
    if(head->next==NULL){
        delete(head);
        head=NULL;
    }
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
}
int main(){
    Node *head=new Node(5);
    insertAtBegin(head,10);
    insertAtBegin(head,1);
    insertAtBegin(head,25);
    print(head);
    cout<<endl;
    deleteAtEnd(head);
    print(head);
}