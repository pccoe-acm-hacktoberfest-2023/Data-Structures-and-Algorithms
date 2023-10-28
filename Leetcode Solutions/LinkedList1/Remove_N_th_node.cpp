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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

            int count=0;
            ListNode *temp=head;


            
            if(head->next==NULL)
            return NULL;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
            int x=count-n;
            if(count==n)return head->next;
            ListNode *prev;
            temp=head;

            while(x--){
                    prev=temp;
                    temp=temp->next;
            }
            prev->next=temp->next;

           

            return head;
    }
};