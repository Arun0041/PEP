#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val) {
        if (top + 1 >= size) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    bool isempty() { return top == -1; }
};

int main() {
    Stack st(5);
    st.push(5);
    st.push(7);
    st.push(9);
    st.push(1);
    st.push(3);
    st.push(3);
    cout << st.peek() << '\n';
    cout << st.isempty() << "\n";
}