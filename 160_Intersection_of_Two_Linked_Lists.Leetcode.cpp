/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* p=headA;
        ListNode* q=headB;

        while(p!=NULL && q!=NULL){
            if(p==q){
                return q;

            }
            p=p->next;
            q=q->next;
            if(p==NULL){
                p=headA;
            }
            else if(q==NULL){
                q=headB;
            }
        }
        return NULL;
        
    }
};