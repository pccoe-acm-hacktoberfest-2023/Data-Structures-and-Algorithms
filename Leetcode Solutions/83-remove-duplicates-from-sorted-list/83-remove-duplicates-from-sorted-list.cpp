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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head,*temp1;
        while (temp!=NULL && temp->next !=NULL) {
             temp1 = temp->next;
            if (temp->val == temp1->val)
                temp->next = temp1->next;
            else
                temp = temp1;
        }
        return head;
    }
};