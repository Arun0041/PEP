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
    Node* n = new Node(val, head);
    head = n;
}

void insertAt(Node*& head,int val){
    Node* n = new Node(val);
    if(!head){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = n;
}

void insertAtNth(Node*& head,int val,int pos){
    if(pos <= 0){
        insertAtBegin(head,val);
        return;
    }
    Node* temp = head;
    int idx = 0;
    while(temp && idx < pos-1){
        temp = temp->next;
        idx++;
    }
    if(!temp){
        insertAt(head,val);
        return;
    }
    Node* n = new Node(val, temp->next);
    temp->next = n;
}

void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<"\n";
}

int main(){
    Node *head=new Node(5);
    insertAt(head,10);
    insertAtBegin(head,1);
    insertAtBegin(head,25);
    print(head);
    // example: insert 99 at position 2 (0-based)
    insertAtNth(head,99,2);
    print(head);
    return 0;
}