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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL){
            return head;
        }
        ListNode* curr=head;
        ListNode* even=new ListNode;
        ListNode* temp=even;
        ListNode* prev=NULL;
        int count=1;

        while(curr!=NULL){
            if(count%2==0){
                ListNode* n=new ListNode(curr->val);
                temp->next=n;
                temp=temp->next;
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
            count+=1;
            
        }

        prev->next=even->next;

        return head;

        
    }
};