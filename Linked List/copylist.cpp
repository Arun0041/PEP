
// 138. Copy List with Random Pointer
// https://leetcode.com/problems/copy-list-with-random-pointer/description/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;

        Node* temp = head;

        // Step 1: Insert copy nodes
        while(temp) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }

        // Step 2: Set random pointers
        temp = head;
        while(temp) {
            if(temp->random) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate the lists
        temp = head;
        Node* newHead = head->next;
        Node* copy = newHead;

        while(temp) {
            temp->next = temp->next->next;
            if(copy->next) {
                copy->next = copy->next->next;
            }
            temp = temp->next;
            copy = copy->next;
        }

        return newHead;
    }
};
