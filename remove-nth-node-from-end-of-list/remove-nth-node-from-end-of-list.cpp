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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode;
    dummy->next=head;
    auto fast=dummy,slow=dummy;
    while(n)
    {
        fast=fast->next;
        n--;
    }
    while(fast->next != nullptr)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    
    return dummy->next;
    
    }
};
