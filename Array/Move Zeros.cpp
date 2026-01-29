// [0,1,0,3,12]
// ouput is : [1,3,12,0,0];

#include<bits/stdc++.h>
using namespace std;

// Method 1: with extra space 
void moveZerosLast(vector<int>& arr){
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]=0){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }
}


// method 2: without extra space using two pointer
void moveZeros(vector<int> &arr){
    int n=arr.size();
    int j=0; 
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++] = arr[i];
        }
    }
    for(int i=j;i<n;i++){
        arr[i]=0;
    }
}


int main(){
    vector<int> arr = {0,1,0,3,12};
    moveZerosLast(arr);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}