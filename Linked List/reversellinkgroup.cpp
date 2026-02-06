// 25. Reverse Nodes in k-Group
// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c=0;
        ListNode* curr=head;
        while(curr && c<k){
            c++;
            curr=curr->next;
        }
        if(c<k) return head;
        ListNode* p=NULL;
        curr=head;
        ListNode* temp;
        c=0;
        while(c<k){
            ListNode* temp=curr->next;
            curr->next=p;
            p=curr;
            curr=temp;
            c++;
        }
        head->next=reverseKGroup(curr,k);
        return p;
    }
};