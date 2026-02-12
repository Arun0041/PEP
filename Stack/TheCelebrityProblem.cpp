// The Celebrity Problem
// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> st;

        for(int i = 0; i < n; i++){
            st.push(i);
        }

        while(st.size() > 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            if(mat[a][b] == 1){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }

        int potentialCandidate = st.top();
        for(int i = 0; i < n; i++){
            if(i == potentialCandidate) continue;

            if(mat[potentialCandidate][i] == 1) return -1;
            if(mat[i][potentialCandidate] == 0) return -1;
        }

        return potentialCandidate;
    }
};
