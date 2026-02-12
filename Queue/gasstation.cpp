// 134. Gas Station
// https://leetcode.com/problems/gas-station/description//

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // for(int i=0;i<gas.size();i++){
        //     int total=gas[i];
        //     total-=cost[i];
        //     if(total<0){
        //         continue;
        //     }
        //     int t= (i+1)%gas.size();
        //     while(t!=i){
        //         total+=gas[t];
        //         total-=cost[t];
        //         if(total<0){
        //         break;
        //         }
        //         t=(t+1)%gas.size();
        //     }
        //     if(t==i) return i;
        // }
        // return -1;
        int total=0;
        int tank=0;
        int start = 0;
        for(int i=0;i<gas.size();i++){
            int diff = gas[i]-cost[i];
            total+=diff;
            tank+=diff;
            if(tank<0){
                tank=0;
                start=i+1;
            }
        }
        if(total>=0) return start;
        return -1;
    }
};