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
    ListNode* partition(ListNode* head, int x) {

        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* new_head=new ListNode;
        ListNode* curr_new=new_head;
        ListNode* curr=head;
        ListNode* prev=curr;
        ListNode* temp;
         
        
        while(curr!=NULL ){
            if(curr->val<x){
               
                ListNode* n=new ListNode; 
                n->val=curr->val;
                curr_new->next=n;
                curr_new=curr_new->next;
                if(curr==head){
                    head=head->next;
                    curr=curr->next;
                    
                }
                else{
                prev->next=curr->next;
                curr=curr->next;
                }
                
            }
            else{
                prev=curr;
                curr=curr->next;

            } 

        }
        

        curr_new->next=head;
        
         
        return new_head->next;
        
    }
};