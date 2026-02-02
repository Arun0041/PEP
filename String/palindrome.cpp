#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int i,int n){
    if(i>=n) return true;
    if(s[i]!=s[n]) return false;
    return palindrome(s, i+1, n-1);
}
int main(){
    string s;
    cin>>s;
    int n=s.length()-1;
    int a=palindrome(s,0,n);
    cout<< (a==0)?"False":"True";
}