// 621. Task Scheduler
// https://leetcode.com/problems/task-scheduler/description/
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char c : tasks) freq[c-'A']++;

        priority_queue<int> pq;
        for(int f : freq)
            if(f) pq.push(f);

        int time = 0;

        while(!pq.empty()){
            vector<int> temp;
            int cycle = n + 1;

            while(cycle-- && !pq.empty()){
                int f = pq.top();
                pq.pop();
                if(f-1 > 0) temp.push_back(f-1);
                time++;
            }

            for(int x : temp) pq.push(x);

            if(pq.empty()) break;

            time += cycle + 1;
        }

        return time;
    }
};