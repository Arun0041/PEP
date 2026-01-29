#include <bits/stdc++.h>
using namespace std;

// LeetCode 88: Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // merge from the end to avoid overwriting nums1's initial values
    int i = m - 1;        // last index of initialized part in nums1
    int j = n - 1;        // last index in nums2
    int k = m + n - 1;    // last index of nums1

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
    while (j >= 0) nums1[k--] = nums2[j--];
}


int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}