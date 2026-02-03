#include<bits/stdc++.h>
using namespace std;
class Node{
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
int main(){
    Node* head = new Node(5);
}