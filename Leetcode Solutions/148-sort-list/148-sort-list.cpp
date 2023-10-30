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
private:
    // Helper function for performing Merge Sort on a linked list.
    void MergeSorting(ListNode** head) {
        // Initialize pointers for dividing the list into two halves.
        ListNode* cur = *head;
        ListNode* first;
        ListNode* second;
        
        // Base case: if the list is empty or contains only one element, no need to sort.
        if (!cur || !cur->next) {
            return;
        }

        // Divide the list into two halves by finding the middle.
        FindMid(cur, &first, &second);
        
        // Recursively sort the two halves.
        MergeSorting(&first);
        MergeSorting(&second);
        
        // Merge the sorted halves back together.
        *head = Merge(first, second);
    }

    // Helper function for finding the middle of a linked list.
    void FindMid(ListNode* cur, ListNode** first, ListNode** second) {
        ListNode* slow, *fast;
        slow = cur;
        fast = cur->next;
        
        // Move the 'slow' pointer by one step and the 'fast' pointer by two steps.
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        
        // Set 'first' and 'second' pointers to divide the list at the midpoint.
        *first = cur;
        *second = slow->next;
        slow->next = NULL; // Disconnect the first half from the second half.
    }

    // Helper function for merging two sorted linked lists.
    ListNode* Merge(ListNode* first, ListNode* second) {
        ListNode* ans;
        
        // Base cases: if one of the lists is empty, return the other one.
        if (!first) return second;
        if (!second) return first;
        
        // Compare the values of the nodes and merge them in ascending order.
        if (first->val <= second->val) {
            ans = first;
            ans->next = Merge(first->next, second);
        } else {
            ans = second;
            ans->next = Merge(first, second->next);
        }
        
        return ans;
    }

public:
    // Main function for sorting a linked list using Merge Sort.
    ListNode* sortList(ListNode* head) {
        // Call the Merge Sorting function to sort the linked list.
        MergeSorting(&head);
        return head;
    }
};
