#include<iostream>
#include <vector>
using namespace std;
class stack{
    public:
    vector<int> ans;
    int t=-1;
    void push(int val){
        t++;
        ans.push_back(val);
    }
    int top(){
        return ans[t];
    }
    void pop(){
        t--;
        ans.pop_back();
    }
    int size(){
        return ans.size();
    }
};
int main(){
    stack st;
    st.push(5);
    st.push(10);
    st.push(55);
    st.push(2);
    st.push(10);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top();
}