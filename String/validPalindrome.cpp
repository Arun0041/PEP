#include<bits/stdc++.h>
using namespace std;

// Valid Palindrome
// example: "A man , a plan, a canal: Panama" -> true
// result: "amanaplanacanalpanama"

bool isValidPalindrome(string s){
    string res="";
    for(char c:s){
        if(isalnum(c)){
            res+=tolower(c);
        }
    }
    int n=res.length();
    int st=0;
    int end = n-1;
    while(st<=end){
        if(res[st]!=res[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}


int main(){

}