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
        if(!head || !head->next)
            return head;
        ListNode *temp = head, *dummy = new ListNode(-1), *t = dummy;
        while(temp){
            if((temp->next && temp->val != temp->next->val) || (temp->next == NULL)){
                t->next = temp;
                t = t->next;
                temp = temp->next;
            }
            else{
                ListNode *p = temp;
                temp = temp->next;
                while(temp && p->val == temp->val){
                    ListNode *tmp2 = temp;
                    temp = temp->next;
                    delete tmp2;
                    tmp2 = NULL;
                }
                delete p;
                p = NULL;
                t->next = NULL;
            }
        }
        return dummy->next;
    }
};