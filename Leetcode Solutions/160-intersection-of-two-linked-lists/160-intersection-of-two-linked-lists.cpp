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
    // This function, 'getIntersectionNode', finds and returns the intersection node of two singly-linked lists,
    // 'headA' and 'headB'. If there is no intersection, it returns NULL.

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Create an unordered_map to store the nodes of the first list along with their counts.
        unordered_map<ListNode*, int> m;

        // Traverse the first list 'headA' and store each node along with its count in the map 'm'.
        while (headA != NULL) {
            m[headA]++;
            headA = headA->next;
        }

        // Traverse the second list 'headB' and check if each node is present in the map 'm'.
        while (headB != NULL) {
            if (m[headB] > 0) {
                // If a node from 'headB' is found in the map 'm', it is the intersection node.
                return headB;
            }
            headB = headB->next;
        }

        // If no intersection is found, return NULL.
        return NULL;
    }
};
