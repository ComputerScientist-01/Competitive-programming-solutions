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



/*

auto p1=head,p2 = head;
 
    if(p1 == NULL) return head->next; 
 Move pi k nodes into the list. 
for (int i = 0; i < n; i++) {
     // Out of bounds
    if ( p1 == nullptr) return nullptr;
    p1 = p1->next;
}

 Move them at the same pace. When p1 hits the end, p2 will be at the right element . 
while( p1 != nullptr){
    p1=p1->next;
    p2=p2->next;
    
}
        p2->next=p2->next->next;
        
 return head;

*/