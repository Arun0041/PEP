// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int st=0;
        int end=arr.size()-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st);
            if(arr[mid]==x){
                ans=mid;
                end=mid-1;
            }else if(arr[mid]>x){
                ans=mid;
                end=mid-1;
            }
            else{
             st=mid+1;   
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
    cout<<obj.findCeil(arr,x)<<endl;
    return 0;
}