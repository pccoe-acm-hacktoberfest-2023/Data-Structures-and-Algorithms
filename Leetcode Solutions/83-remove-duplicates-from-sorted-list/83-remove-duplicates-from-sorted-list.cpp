class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head; // Create a pointer 'temp' to traverse the linked list.

        while (temp != nullptr && temp->next != nullptr) {
            // Check if the current node's value is equal to the next node's value.
            if (temp->val == temp->next->val) {
                temp->next = temp->next->next; // Skip the next node (remove it).
            } else {
                temp = temp->next; // Move to the next node to check for duplicates.
            }
        }
        
        return head; // Return the modified head of the linked list after removing duplicates.
    }
};
