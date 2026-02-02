#include<bits/stdc++.h>
using namespace std;

// Bubble Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)

void bubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}