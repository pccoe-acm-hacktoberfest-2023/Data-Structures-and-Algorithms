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

    void MergeSorting(ListNode** head){
        ListNode *cur = *head;
        ListNode *first;
        ListNode *second;
        if(!cur or !cur->next){
            return;
        }
        FindMid(cur, &first, &second);
        MergeSorting(&first);
        MergeSorting(&second);
        *head = Merge(first, second);
    }
    void FindMid(ListNode* cur,ListNode** first, ListNode** second){
        ListNode* slow, *fast;
        slow = cur;
        fast = cur->next;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                slow = slow->next;
                fast = fast->next;
            }
        }
        *first = cur;
        *second = slow->next;
        slow->next= NULL;
    }
    ListNode* Merge(ListNode* first, ListNode* second){
        ListNode* ans ;
        if(!first) return second;
        if(!second) return first;
        if(first->val <= second->val){
            ans = first;
            ans->next = Merge(first->next, second);
        }
        else{
            ans = second;
            ans->next = Merge(first, second->next);
        }
        return ans;
    }
    public:
    ListNode* sortList(ListNode* head) {
        MergeSorting(&head);
        return head;
    }
};