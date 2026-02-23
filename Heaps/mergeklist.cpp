// 23. Merge k Sorted Lists
// https://leetcode.com/problems/merge-k-sorted-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
            for(auto& x : lists){
                if(x) pq.push({x->val,x});
            }
        if(pq.empty()) return NULL;
        ListNode dummy(-1);
        ListNode* curr = &dummy;
        while(!pq.empty()){
            ListNode* temp = pq.top().second;
            pq.pop();
            curr->next=temp;
            curr=curr->next;
            if(temp->next){
                pq.push({temp->next->val,temp->next});
            }
        }
        curr->next=NULL;
        return dummy.next;
    }
};