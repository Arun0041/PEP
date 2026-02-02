// 59. Spiral Matrix II
// https://leetcode.com/problems/spiral-matrix-ii/description/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0));
        int top=0;
        int bottom=n-1;
        int right=n-1;
        int left=0;
        int idx=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                arr[top][i]=idx;
                idx++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                arr[i][right]=idx;
                idx++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    arr[bottom][i]=idx;
                    idx++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    arr[i][left]=idx;
                    idx++;;
                }
                left++;
            }
        }
        return arr;
    }
};