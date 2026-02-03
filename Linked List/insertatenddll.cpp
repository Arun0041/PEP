#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAtEnd(Node*& head,int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=temp;
        return;
    }
    Node* temp1 = head;
    while(temp1->next){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;
}
void insertAtBegin(Node*& head,int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=temp;
        return;
    }
    Node* temp1 = head;
    temp1->prev=temp;
    temp->next=head;
    head=temp;
}
void insertAtPosition(Node*& head,int val, int pos){
    if(pos==0){
        insertAtBegin(head,val);
    }
    int c=0;
    Node* temp=head;
    while(c<pos && temp->next){
        temp=temp->next;
        c++;
    }
    Node* node=new Node(val);
    Node* t1=temp->next;
    temp->next=node;
    t1->prev=node;
    node->prev=temp;
    node->next=t1;
}
void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main(){
    Node* head=new Node(5);
    insertAtEnd(head,6);
    insertAtEnd(head,10);
    insertAtEnd(head,4);
    insertAtEnd(head,1);
    insertAtBegin(head,8);
    insertAtPosition(head,4,2);
    print(head);
}