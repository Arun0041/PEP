#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    // print the array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // reverse print the array
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // print double of each element
    for(int i=0;i<5;i++){
        cout<<arr[i]*2<<" ";
    }

    

    cout<<endl;
    return 0;
}

