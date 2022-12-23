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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;

        }
        int f=0;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* same=curr->next;
        

        while(curr!=NULL && same!=NULL){
            f=0;
            while(same!=NULL && same->val==curr->val){
                same=same->next;
                f=1;
            }
            if(f==1){
                if(curr==head){
                    head=same;
                    curr=same;
                    if(same!=NULL)
                    same=same->next; 
                }
                else{ 
                    if(same==NULL){
                        prev->next=NULL;
                    }
                    else{
                    prev->next=same;
                    curr=same;
                    same=same->next;
                    }
                }
            }
            else{
                prev=curr;
                curr=same;
                same=same->next;
                
            }
        }
 
        return head;

        
    }
};