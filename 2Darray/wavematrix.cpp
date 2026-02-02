#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}