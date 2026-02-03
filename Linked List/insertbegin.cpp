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
int main(){
    Node *head=new Node(5);
    insertAtBegin(head,10);
    insertAtBegin(head,1);
    insertAtBegin(head,25);
    print(head);

}