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
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        for(int i=0;i<10002;i++){
            if(temp==NULL)return false;
            temp=temp->next;
        }
        return true;
    }
};