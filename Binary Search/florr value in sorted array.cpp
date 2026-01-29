#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int st=0;
        int end=arr.size()-1;
        int ans=-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid]==x){
                ans=mid;
                st=mid+1;
            }else if(arr[mid]<x){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    cout<<obj.findFloor(arr,x)<<endl;
    return 0;
}