//leetcode 387
//https://leetcode.com/problems/first-unique-character-in-a-string/
#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }

int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);
}