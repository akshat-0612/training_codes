class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
        }
        temp=head;
        count=count-n;
        ListNode* temp_prev=NULL;
        while(count--){
            temp_prev=temp;
            temp=temp->next;
            
        } 
        if(temp_prev==NULL){
            head=temp->next;
        }
        else
        temp_prev->next=temp->next;
        return head;
        
    }
};