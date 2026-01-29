#include<bits/stdc++.h>
using namespace std;


// 1. Selection Sort
// select the minimum element from unsorted array and swap it with the first element of unsorted array
// [5,2,9,1] // minimum element is 1 at index 3
// Pass 1: [1,2,9,5] // now minimum element is 2 at index 1
// Pass 2: [1,2,9,5] // now minimum element is 5 at index 3
// Pass 3: [1,2,5,9] // now minimum element is 9 at index 2
void selectionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}


// Bubble Sort
// Repeatedly swap the adjacent elements if they are in wrong order
// [5,2,9,1]
// Pass 1: [2,5,1,9]
// Pass 2: [2,1,5,9]
// Pass 3: [1,2,5,9]

void bubbleSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int swapFlag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapFlag=true;
            }
        }
        if(!swapFlag){
            break;
        }
    }
}

// Insertion sort
// [5,2,9,1]
// Sorted        Unsorted
//    [5]        [2,9,1]
//   [2,5]        [9,1]
//  [2,5,9]        [1]
// [1,2,5,9]        []
void insertionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}



int main(){
    return 0;
}

