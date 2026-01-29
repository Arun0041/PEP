#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums){
    int k=0;
    int num=INT_MAX; // iterate through the array and check for duplicates
    int n=nums.size();   
    for(int i=0;i<n;i++){
        // if current number is not equal to previous number, then it is not a duplicate
        if(num!=nums[i]){
            nums[k]=nums[i];
            k++;
            num=nums[i];
        }
    }
    return k;
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int k = removeDuplicates(nums);
    cout<<k<<endl;
    return 0;
}
