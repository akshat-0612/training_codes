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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *p = new ListNode(-1);
        ListNode *t = p;

        while (list1 != NULL && list2 != NULL)
        {

            if (list1->val < list2->val)
            {
                t->next = list1;
                t = t->next;
                list1 = list1->next;
            }
            else
            {
                t->next = list2;
                t = t->next;
                list2 = list2->next;
            }
        }

        if (list1 == NULL)
        {
            t->next = list2;
        }
        else
        {
            t->next = list1;
        }

        return p->next;
    }
};