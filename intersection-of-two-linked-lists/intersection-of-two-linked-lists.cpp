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
        auto h1=headA,h2=headB;
        while(h1 != h2)
        {
            if(h1 == nullptr)
            {
                h1=headB;
            }
            else
            {
                h1=h1->next;
            }
            
            if(h2 == nullptr)
            {
                h2=headA;
            }
            
            else
            {
                h2=h2->next;
            }
        }
        return h1;
    }
};