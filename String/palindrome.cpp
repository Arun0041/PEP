#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int i,int n){
    while(i<=n){
        if(s[i]==s[n]){
            i++;
            n--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    int n=s.length()-1;
    int a=palindrome(s,0,n);
    cout<< (a==0)?"False":"True";
}