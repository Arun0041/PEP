#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=0;
    int i=0;
    while(s[n]){
        n++;
    }
    n=n-1;
    while(i<=n){
        swap(s[i],s[n]);
        i++;
        n--;
    }
    cout<<s;
}