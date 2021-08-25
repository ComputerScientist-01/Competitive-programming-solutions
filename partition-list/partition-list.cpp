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
    ListNode* partition(ListNode* head, int x) {
         ListNode* before_head = new ListNode(); 
        //a node that points to the elements before
         ListNode* after_head = new ListNode();
        // a node that points to the after elements
        ListNode *before=before_head, *after=after_head;
        while (head != NULL)
        {
             // If the original list node is lesser than the given x,
            // assign it to the before list.
            if(head->val <x)
            {
                before->next=head;
                before=before->next;
            }
            // If the original list node is greater or equal to the given x,
            // assign it to the after list.
            else{
                after->next=head;
                after=after->next;
            }
            head=head->next;
        }
        after->next=nullptr;
        before->next=after_head->next;
        return before_head->next;
        
    }
};