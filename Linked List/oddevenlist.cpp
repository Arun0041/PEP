// 328. Odd Even Linked List
// https://leetcode.com/problems/odd-even-linked-list/description/

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head; 
        ListNode* f=head;
        ListNode* s=head->next;
        ListNode* e = head->next;
        while(s && s->next){
            f->next=s->next;
            f=f->next;
            s->next=f->next;
            s=s->next;
        }
        f->next=e;
        return head;
    }
};