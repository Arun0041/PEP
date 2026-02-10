// Insert an Element at the Bottom of a Stack
// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        int s = st.top();
        st.pop();
        st=insertAtBottom(st,x);
        st.push(s);
        return st;
}
int main(){
    int n;
    if(!(cin >> n)) return 0;
    stack<int> st;
    for(int i = 0; i < n; ++i){
        int v; cin >> v;
        st.push(v);
    }
    int x; cin >> x;
    st = insertAtBottom(st, x);
    // print stack from top to bottom
    bool first = true;
    while(!st.empty()){
        if(!first) cout << ' ';
        cout << st.top();
        st.pop();
        first = false;
    }
    cout << '\n';
    return 0;
}