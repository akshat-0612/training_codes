class Solution {
public:
    void reorderList(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
       }
       
       ListNode* start=head;
       ListNode* start_prev=NULL;
       if(count%2==1){
           int l=0;
           while(l!=((count/2)+1)){
               l+=1;
               start_prev=start;
               start=start->next;
           }
        }
        else{
            int l=0;
           while(l!=(count/2)){
               l+=1;
                start_prev=start;
               start=start->next;
           }
        }
        
        start_prev->next=NULL;

        ListNode* curr=start;
        
        ListNode* prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        start=prev;
        
        curr=head;
        ListNode* temp2;
        while(start!=NULL){
            temp=curr->next;
            temp2=start->next;
            curr->next=start;
            start->next=temp;
            start=temp2;
            curr=temp;
        }
        
    }
};