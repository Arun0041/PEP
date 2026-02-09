// 148. Sort List
// https://leetcode.com/problems/sort-list/description/

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
    ListNode* getMiddle(ListNode* head){
        ListNode* s = head;
        ListNode* f = head->next;

        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        return s;
    }
    ListNode* merge(ListNode* ls,ListNode* rs){
        ListNode dummy(0);
        ListNode* d = &dummy;
        while(ls && rs){
            if(ls->val<rs->val){
                d->next=ls;
                ls=ls->next;
            }
            else{
                d->next=rs;
                rs=rs->next;
            }
            d=d->next;

        }
            if(ls) d->next=ls;
            if(rs) d->next=rs;
            return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* mid = getMiddle(head);
        ListNode* left=head;
        ListNode* right=mid->next;

        //disconnect left and right half
        mid->next=NULL;
        ListNode* ls=sortList(left);
        ListNode* rs=sortList(right);
        return merge(ls,rs);
    }
};