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
    // This function, 'hasCycle', checks if a given singly-linked list has a cycle.
    // It uses the Floyd's Tortoise and Hare algorithm to detect a cycle in the list.
    // The function returns 'true' if a cycle is found and 'false' otherwise.

    bool hasCycle(ListNode *head) {
        // Initialize two pointers 'slow' and 'fast' both starting from the head of the list.
        ListNode* slow = head;
        ListNode* fast = head;

        // Use a while loop to traverse the list. The 'fast' pointer moves at twice
        // the speed of the 'slow' pointer.
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;        // Move 'slow' one step.
            fast = fast->next->next;  // Move 'fast' two steps.

            // If there is a cycle, the 'fast' pointer will eventually catch up to the 'slow' pointer.
            if (fast == slow) {
                return true;  // A cycle is detected, so return 'true'.
            }
        }

        // If the loop completes without finding a cycle, return 'false'.
        return false;
    }
};  // End of the Solution class.
