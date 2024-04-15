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
    // This function, 'detectCycle', checks for the presence of a cycle in a singly-linked list
    // and returns the node where the cycle begins if a cycle is found, or NULL if there is no cycle.

    ListNode *detectCycle(ListNode *head) {
        // Initialize three pointers: 'slow', 'fast', and 'temp', all starting from the head of the list.
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;

        // Use a while loop to traverse the list. The 'fast' pointer moves at twice
        // the speed of the 'slow' pointer.
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // If a cycle is detected (the 'slow' and 'fast' pointers meet), proceed to find the cycle's starting point.
            if (slow == fast) {
                // Move the 'temp' pointer from the head and 'slow' from the meeting point at the same speed.
                // When they meet, it will be the starting point of the cycle.
                while (temp != slow) {
                    temp = temp->next;
                    slow = slow->next;
                }

                // Return the starting point of the cycle.
                return slow;
            }
        }

        // If there is no cycle, return NULL.
        return NULL;
    }
};  // End of the Solution class.
