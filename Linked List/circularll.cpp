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
int printEven(Node* head){
    if(head==NULL) return 0;
    Node* temp=head;
    int ans=0;
    while(temp){
        if(temp->val%2==0){
            ans++;
        }
        temp=temp->next;
        if(temp==head) return ans;
    }
}
void deleteAtEnd(Node* &head){
    if(head==NULL) return;
    if(head->next==head){
        delete(head);
        head=NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    Node* t=temp->next;
    temp->next=head;
    delete(t);
}
void deleteAtBeg(Node* &head){
    if(head==NULL) return;
    if(head->next==head){
        delete(head);
        head=NULL;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* t=head->next;
    delete(head);
    temp->next=t;
    head=t;
}
int main(){
    Node* head=NULL;
    insertAtEnd(head,5);
    insertAtEnd(head,50);
    insertAtEnd(head,25);
    insertAtEnd(head,35);
    print(head);
    cout<<endl;
    // deleteAtEnd(head);
    deleteAtBeg(head);
    print(head);
    cout<<endl;
    cout<<printEven(head);
}