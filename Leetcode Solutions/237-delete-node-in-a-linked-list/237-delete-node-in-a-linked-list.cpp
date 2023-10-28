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
    // This function, 'deleteNode', deletes a node from a singly-linked list given the node to be deleted.

    void deleteNode(ListNode* node) {
        // If the given 'node' is the last node in the list, simply delete it and return.
        if (node->next == NULL) {
            delete node;
        } else {
            // Swap the values of the given 'node' and the next node.
            swap(node->val, node->next->val);

            // Delete the next node, effectively removing it from the list.
            ListNode* temp = node->next;
            node->next = node->next->next;
            delete temp;
        }
    }
};
