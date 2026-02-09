#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class StackLL {
private:
    Node* head;
    int sz;
public:
    StackLL(){
        head=nullptr;
        sz = 0; 
    }

    void push(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
        ++sz;
    }

    void pop() {
        if (!head) {
            cout<<"stack underflow";
        }
        Node* t = head;
        head = head->next;
        delete t;
        --sz;
    }

    int top() const {
        if (!head) return 0;
        return head->data;
    }

    bool empty() const { return head == nullptr; }
    int size() const { return sz; }
};

int main() {
    StackLL st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "top: " << st.top() << '\n';
    st.pop();
    cout << "top:" << st.top() << '\n';
    cout << boolalpha << "empty: " << st.empty() << '\n';
    cout << "size: " << st.size() << '\n';

    st.pop();
    st.pop();

    return 0;
}
