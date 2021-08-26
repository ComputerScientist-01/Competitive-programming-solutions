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
    ListNode* deleteDuplicates(ListNode* head) {
        
     // Base case
     if (!head or!head->next)
     { return head; }
     
     // Recursive case
     
     // No duplicate in the first part
     if (head->next->val != head->val){ 
         head->next = deleteDuplicates(head->next);
         return head;
     }
     //Duplicates exist in the first part
     ListNode* curr = head;
     while (curr->next and curr->next->val == curr->val)
     {    curr = curr->next; }
     return deleteDuplicates(curr->next);
        
    }
};