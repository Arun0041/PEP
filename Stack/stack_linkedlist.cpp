#include <iostream>
#include <stdexcept>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class StackLL {
private:
    Node* head;
    int sz;
public:
    StackLL() : head(nullptr), sz(0) {}
    ~StackLL() {
        while (head) {
            Node* t = head;
            head = head->next;
            delete t;
        }
    }

    void push(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
        ++sz;
    }

    void pop() {
        if (!head) {
            throw runtime_error("pop from empty stack");
        }
        Node* t = head;
        head = head->next;
        delete t;
        --sz;
    }

    int top() const {
        if (!head) throw runtime_error("top from empty stack");
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
    cout << "top after pop: " << st.top() << '\n';
    cout << boolalpha << "empty: " << st.empty() << '\n';
    cout << "size: " << st.size() << '\n';

    st.pop();
    st.pop();
    cout << boolalpha << "empty after removing all: " << st.empty() << '\n';

    try {
        st.pop();
    } catch (const exception &e) {
        cout << "caught exception: " << e.what() << '\n';
    }

    return 0;
}
