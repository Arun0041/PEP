#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    int n1=s.size();
    int n2=t.size();
    if(n1!=n2){
        return false;
    }

    vector<int> freq(26,0);

    for(int i=0;i<n1;i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        freq[t[i]-'a']++;
    }

    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "anagaram";
    string t = "nagaram"

}