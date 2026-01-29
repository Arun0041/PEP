#include <bits/stdc++.h>
using namespace std;

// LeetCode 167: Two Sum II - Input Array Is Sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

vector<int> twoSum(vector<int> &nums, int target)
{
    int st = 0;
    int end = nums.size()-1;
    int sum = 0;
    while(st<end){
        sum = nums[st] + nums[end];
        if(sum==target){
            return {st+1, end+1};
        }else if(sum > target){
            end--;
        }else{
            st++;
        }
    }
    return {-1,-1};
}

int main(){
    return 0;
}