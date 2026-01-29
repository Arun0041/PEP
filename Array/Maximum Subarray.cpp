#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
// Time Complexity: O(N)
// Space Complexity: O(1)

// In Kadane Algorithm:
// MaxSum is track max sum in the array
// CurrSum is track current sum including current element
// If CurrSum becomes negative, we reset it to 0 because
// negative sum will decrease the sum of any future subarray.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int m_sum = INT_MIN;
        int c_sum = 0;

        for(int i=0;i<nums.size();i++){
            c_sum+=nums[i];

            if(c_sum>m_sum){
                m_sum=c_sum;
            }
            if(c_sum<0){
                c_sum=0;
            }
        }
        return m_sum;
    }
};

int main(){
    return 0;
}