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
bool printr(Node* head,int key){
    if(head==NULL) return false;
    if(head->val==key) return true;
    return printr(head->next,key);
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
void deleteAtPos(Node*& head,int pos){
    if(head==NULL) return;
    if(pos==1){
        Node* temp=head;
        temp=temp->next;
        delete (head);
        head=temp;
        return;
    }
    int c=0;
    Node* temp=head;
    while(temp->next && c<pos){
        temp=temp->next;
        c++;
    }
    if(temp==NULL || temp->next==NULL) return;
    Node* temp1 = temp->next;
    temp->next=temp->next->next;
    delete(temp1);
}
int main(){
    Node *head=new Node(5);
    insertAtBegin(head,10);
    insertAtBegin(head,1);
    insertAtBegin(head,25);
    print(head);
    cout<<endl;
    // deleteAtEnd(head);
    // print(head);
    deleteAtPos(head,2);
    print(head);
    cout<<endl;
    cout<<printr(head,1);
}