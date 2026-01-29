// DNF Algotithm to sort an array of 0s, 1s and 2s
// (Dutch National Flag Algorithm)
// In this approach, we maintain three pointers: low, mid, and high.
// low = 0 points to the position to place the next 0,
// mid = 0 points to the current element under consideration,
// high = last position to place a 2.

#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sort012(arr);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}