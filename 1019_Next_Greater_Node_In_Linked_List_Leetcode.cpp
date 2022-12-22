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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int>ans;
        stack<int>stk;
        ListNode* curr=head;
        ListNode* temp;
        ListNode* prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
       
        
        curr=prev;
        while(curr!=NULL){
            cout<<curr->val<<endl;
            while(!stk.empty() && stk.top()<=curr->val){
                stk.pop();
            }
            if(stk.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(stk.top());
            }
            stk.push(curr->val);
            curr=curr->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};