class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || k==0) return head;
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL){
            temp=temp->next;
            count+=1;
        }
        k=k%(count+1);
        temp->next=head;
        int j=count-k;
        temp=head;
        while(j--){
            temp=temp->next;

        }
        ListNode* res=temp->next;
        temp->next=NULL;
        return res;
        
    }
};