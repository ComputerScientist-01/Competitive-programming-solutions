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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode;
        dummy->next=head;
        auto curr = dummy;
        if(head == nullptr){
            return nullptr;
        }
        while(curr->next != nullptr){
            if(curr->next->val == val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return dummy->next;        
    }
};

