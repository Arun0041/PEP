#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }   
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 7;
    int result = binarySearch(arr, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;

}