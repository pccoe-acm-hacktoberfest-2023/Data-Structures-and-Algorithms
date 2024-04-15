class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head; // If the list is empty or has only one node, there are no duplicates to remove.
        }

        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1); // Create a dummy node as the new head.
        ListNode* t = dummy; // Create a pointer for the previous distinct node.

        while (temp) {
            if ((temp->next && temp->val != temp->next->val) || (temp->next == nullptr)) {
                // If the current node is distinct (not equal to the next node), or it's the last node.
                t->next = temp; // Link the previous distinct node to the current distinct node.
                t = t->next;   // Update the previous distinct node pointer.
                temp = temp->next; // Move to the next node.
            } else {
                ListNode* p = temp; // Create a pointer to the current node.
                temp = temp->next; // Move to the next node.
                
                while (temp && p->val == temp->val) {
                    // Skip all nodes with values equal to the current node's value.
                    ListNode* tmp2 = temp;
                    temp = temp->next;
                    delete tmp2; // Delete the duplicate node.
                    tmp2 = nullptr;
                }

                delete p; // Delete the current node, which is a duplicate.
                p = nullptr;
                t->next = nullptr; // Disconnect the previous distinct node from the duplicates.
            }
        }

        return dummy->next; // The new head is the next of the dummy node, which is the first distinct node.
    }
};
