#include<bits/stdc++.h>
using namespace std;

// Selection Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)

void selectionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int minEle=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minEle]){
                minEle=j;
            }
        }
        swap(arr[minEle],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}