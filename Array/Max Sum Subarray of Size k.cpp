// First window sum calculated once
// Then slide the window:
// add next element
// remove leftmost element
// Time complexity 👉 O(n)

#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int ans=0;
        int currSum=0;
        
        // current sum till k window
        for(int i=0;i<k;i++){
            currSum+=arr[i];
        }
        
        ans=currSum; // max sum 
        
        for(int i=k;i<n;i++){
            // from currSum subtract previous element and than add next element
            currSum = currSum - arr[i-k] + arr[i]; 
            ans = max(ans,currSum); // store maxSum
        }
        
        return ans;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is " << maxSubarraySum(arr, k) << endl;
    return 0;
}