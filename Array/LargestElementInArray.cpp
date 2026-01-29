#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr){
    int n=arr.size();
    int maxEle=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxEle<arr[i]){
            maxEle = arr[i];
        }
    }
    return maxEle;
}

int main(){

}

// Phillips company
// Software Development Team
// 8 countrys
// more than 30k employees
// global leader in healthcare
// 