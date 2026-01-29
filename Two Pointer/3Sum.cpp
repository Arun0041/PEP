#include<bits/stdc++.h>
using namespace std;

bool hasTripletWithZeroSum(vector<int>& arr){
    int n=arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0;i<n-1;i++){
        int st=i+1;
        int end=n-1;
        while(st<end){
            int sum = arr[i] + arr[st] + arr[end];
            if(sum==0){
                return true;
            }else if(sum > 0){
                end--;
            }else{
                st++;
            }
        }
    }
    return false;
}

// 3 sum problem unique triplets 
vector<vector<int>> threeSum(vector<int>& arr,int target){
    int n=arr.size();
    sort(arr.begin(), arr.end());
    set<int>s;
    for(int i=0;i<n-1;i++){
        int st=0;
        int end=n-1;
        while(st<end){
            int sum = arr[i]+arr[st]+arr[end];
            if(sum==target){
                s.insert({arr[i], arr[st], arr[end]});
                st++;
                end--;
            }
            else if(sum>target){
                end--;
            }
            else{
                st++;
            }
        }
    }
    vector<vector<int>> res(s.begin(), s.end());
    return res;
}

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    cout<<hasTripletWithZeroSum(arr)<<endl;
    vector<vector<int>> res = threeSum(arr, 0);
    for(auto v: res){
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}