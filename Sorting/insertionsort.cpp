#include<bits/stdc++.h>
using namespace std;

// Insertion Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // implement insertion sort locally
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}