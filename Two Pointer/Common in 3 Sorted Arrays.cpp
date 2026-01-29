#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i=0;
        int j=0;
        int k=0;
        
        int n=arr1.size();
        int m=arr2.size();
        int p=arr3.size();
        
        set<int> ans;
    
                
        while(i<n && j<m && k<p){
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
                ans.insert(arr1[i]);
                    i++;
                    j++;
                    k++;
            }else if(arr1[i]<arr2[j]){
                i++;
            }else if(arr2[j]<arr3[k]){
                j++;
            }else{
                k++;
            }
        }
        
        vector<int> res(ans.begin(),ans.end());
        
        return res;
    }
};