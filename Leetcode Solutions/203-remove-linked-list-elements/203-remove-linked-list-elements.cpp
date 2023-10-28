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
    // void append(ListNode* head, int val){
    //     ListNode* temp = new ListNode(val);
    //     ListNode* temp2 = head;
    //     while(temp2->next != NULL){
    //         temp2 = temp2->next;
    //     }
    //     temp2->next = temp;
    // }
    ListNode* removeElements(ListNode* head, int val) {
    if(head == NULL) return NULL;
    ListNode* temp = head;
    while(head!= NULL && head->val == val){
        head=head->next;
    }
    temp=head;
    while(temp != NULL && temp->next != NULL){
        while(temp != NULL && temp->next != NULL && temp->next->val == val){
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}
};