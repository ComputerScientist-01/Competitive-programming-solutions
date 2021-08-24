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
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        {
            return head;
        }
        
        
        ListNode* dummy = new ListNode();
        dummy->next=head;
        int i=0;
        // if(head != NULL) 
        // {
        //     dummy->next=head;
        // }
        ListNode* pre=dummy;
        for (i=0;i<left-1;++i) 
        {
            
            pre=pre->next;
        }
        ListNode* curr = pre->next;
        ListNode* cn=nullptr;
        for (i=0;i<right-left;++i)
        {
            cn=curr->next;
            curr->next=cn->next;
            cn->next=pre->next;
            pre->next=cn;
        }
        return dummy->next;
    }
};