class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {

        ListNode *start = NULL;
        ListNode *end = NULL;
        ListNode *start_prev = NULL;
        ListNode *end_next = NULL;
        ListNode *curr = head;
        int i = 1;
        while (curr != NULL && i <= right)
        {
            if (i < left)
            {
                start_prev = curr;
            }
            if (i == left)
            {
                start = curr;
            }
            if (i == right)
            {
                end = curr;
                end_next = curr->next;
            }
            curr = curr->next;
            i += 1;
        }
        end->next = NULL;

        // start_prev->next=NULL;
        ListNode *prev = NULL;
        ListNode *currr = start;
        ListNode *temp;
        while (currr != NULL)
        {
            temp = currr->next;
            currr->next = prev;
            prev = currr;
            currr = temp;
        }
        if (start_prev == NULL)
        {
            start->next = end_next;
            return end;
        }
        else
        {

            start_prev->next = prev;
            start->next = end_next;
        }

        return head;
    }
};