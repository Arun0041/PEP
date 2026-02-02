#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>arr,int m,int n,int k){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==k) return true;
        }
    }
    return false;
}
int main(){
    int m,n,k;
    cout<<"Enter size m x n: ";
    cin>>m;
    cin>>n;
    cout<<"Enter taget: ";
    cin>>k;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<search(arr,m,n,k);
    
}