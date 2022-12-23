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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* x=head;
        ListNode* y=head->next;
    
        if(y->next==NULL){
            
            x->next=NULL;
            y->next=x;
            head=y;

            return head;

        }
        ListNode* prev=NULL;
        
        
        ListNode* temp;
        ListNode* Next=y->next;
        
        x->next=Next;
        
        y->next=x;
        head=y;
        prev=x;
        if(x->next!=NULL && x->next->next!=NULL){
        x=x->next;
        y=x->next;
        Next=y->next;
        }
        else{
            return head;
        } 
        
        

        while(y!=NULL){
            x->next=Next; 
            prev->next=y;
            y->next=x;
            prev=x;
            if(x->next!=NULL && x->next->next!=NULL){
                x=x->next;
                y=x->next;
                Next=y->next;
                
            }
            else{
                break;
            }

        }
        return head;

        
    }
}; 