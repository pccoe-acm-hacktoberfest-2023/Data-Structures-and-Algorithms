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
    // This function, 'merge', merges two sorted linked lists 'l1' and 'l2' and returns the merged list.

    ListNode* merge(ListNode* l1, ListNode* l2) {
        // Base cases: If either of the lists is empty, return the other list.
        if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }

        // Compare the values of the current nodes in 'l1' and 'l2'.
        if (l1->val < l2->val) {
            // If the value in 'l1' is smaller, merge 'l1->next' with 'l2' and return 'l1'.
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            // If the value in 'l2' is smaller or equal, merge 'l1' with 'l2->next' and return 'l2'.
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    // This function, 'mergeTwoLists', is a wrapper for the 'merge' function and merges two sorted linked lists.
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return merge(list1, list2);
    }
};
