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
    ListNode* rotateRight(ListNode* head, int k) {
      

        if(!head || !head->next ||k==0){
            return head;
        }
        ListNode *temp=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count++;
        
        temp->next=head;
        int x=count-k%count;
        
        temp=head;
        while(x-->1){
            temp=temp->next;
          

        }
        head=temp->next;
        temp->next=NULL;

        return head;
       
          



    }
};