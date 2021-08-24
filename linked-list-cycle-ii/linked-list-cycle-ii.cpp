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
    ListNode *detectCycle(ListNode *head) {
       auto slow=head;
        auto fast=head;
        auto start=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(start != slow)
                {
                    start=start->next;
                    slow=slow->next;
                }
                return start;
            }
        }
        return NULL;
        
    }
};