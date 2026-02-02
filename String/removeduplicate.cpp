#include<bits/stdc++.h>
using namespace std;

// GeeksforGeeks: Remove duplicates from string
unordered_set<char> st;
string removeDuplicate(string s,int n){
    string t="";
    for(int i=0;i<n;i++){
        if(st.count(s[i])){
            continue;
        }
        else{
            st.insert(s[i]);
            t+=s[i];
        }
    }
    return t;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<removeDuplicate(s,n);
}