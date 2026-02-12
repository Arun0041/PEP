// 735. Asteroid Collision
// https://leetcode.com/problems/asteroid-collision/description/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int curr : asteroids){
            bool d=false;
            while(!st.empty() && st.top()>0 && curr<0){
                int t = st.top();
                if(abs(t)<abs(curr)){
                    st.pop();
                    continue;
                }
                else if(abs(t)>abs(curr)){
                    d=true;
                    break;
                }
                else{
                    st.pop();
                    d=true;
                    break;
                }

            }
            if(!d){
                st.push(curr);
            }
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};