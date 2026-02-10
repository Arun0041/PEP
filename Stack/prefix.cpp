#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void prefix(string s){
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        int t = s[i]-'0';
        if(isdigit(s[i])){
            st.push(t);
        }
        else{
            int a=st.top();
            st.pop();
            int b= st.top();
            st.pop();
            int r=0;
            if(s[i]=='+'){
                r=a+b;
            }
            else if(s[i]=='-'){
                r=a-b;
            }
            else if(s[i]=='*'){
                r=a*b;
            }
            else if(s[i]=='/'){
                r=a/b;
            }
            st.push(r);
        }
    }
    cout << "Result: " << st.top() << endl;
}
void postfix(string s){
    int n=s.length();
    for(int i=0;i<n;i++){
        int t = s[i]-'0';
        if(isdigit(s[i])){
            st.push(t);
        }
        else{
            int a=st.top();
            st.pop();
            int b= st.top();
            st.pop();
            int r=0;
            if(s[i]=='+'){
                r=a+b;
            }
            else if(s[i]=='-'){
                r=a-b;
            }
            else if(s[i]=='*'){
                r=a*b;
            }
            else if(s[i]=='/'){
                r=a/b;
            }
            st.push(r);
        }
    }
    cout << "Result: " << st.top() << endl;
}

int main(){
    string s ="-+7*45+20";
    string s1="71+45*2+*";
    prefix(s);
    postfix(s1);
}