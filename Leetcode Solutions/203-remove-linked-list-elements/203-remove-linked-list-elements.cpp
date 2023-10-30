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
    // This function, 'removeElements', removes all nodes in a singly-linked list 'head'
    // that have the given value 'val'. It returns the modified linked list.

    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return NULL; // If the list is initially empty, return NULL.
        }

        // Remove all nodes with 'val' at the beginning of the list.
        while (head != NULL && head->val == val) {
            head = head->next;
        }

        ListNode* temp = head; // Initialize a temporary pointer to traverse the list.

        // Iterate through the list to remove nodes with 'val'.
        while (temp != NULL && temp->next != NULL) {
            while (temp->next != NULL && temp->next->val == val) {
                temp->next = temp->next->next; // Skip nodes with 'val'.
            }
            temp = temp->next; // Move to the next node.
        }

        return head; // Return the modified linked list.
    }
};
