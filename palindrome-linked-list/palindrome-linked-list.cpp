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
    ListNode* reverse (ListNode* curr){
        ListNode* cn=curr;
        ListNode* prev= nullptr;    
        while(curr != NULL){
        cn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=cn;
            
        }
        return prev;
        
    }
    
    bool isPalindrome(ListNode* head) {
        if(head->next== NULL) return head;
        ListNode *fast=head, *slow= head;
        while(fast != nullptr and fast ->next != nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow=reverse(slow);
        fast=head;
        
        while(slow != nullptr)
        {
            if(slow->val != fast->val){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};