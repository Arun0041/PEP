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
    vector<int> arr = {10, 5, 20, 15, 30};
    cout << "Largest element: " << largestElement(arr) << endl;
    return 0;
}

// Phillips company
// Software Development Team
// 8 countrys
// more than 30k employees
// global leader in healthcare
// 