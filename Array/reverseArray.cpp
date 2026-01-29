#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    // reverse the array using two pointer approach
    int st=0;
    int end=sizeof(arr)/sizeof(arr[0]) - 1;
    while(st<end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    

    return 0;
}