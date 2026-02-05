// 142. Linked List Cycle II
// https://leetcode.com/problems/linked-list-cycle-ii/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isCycle(ListNode* &s, ListNode* &f){
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f){
                return true;;
            }
        }
        return false;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;
        if(!isCycle(s,f)) return  NULL;
        f=head;
        while(f){
            if(s==f) return s;
            s=s->next;
            f=f->next;
        }
        return NULL;
    }
};