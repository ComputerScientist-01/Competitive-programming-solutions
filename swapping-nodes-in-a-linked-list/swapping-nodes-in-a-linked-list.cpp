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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == nullptr) return head;
        ListNode *curr=head , *cn=head , *temp=head;
        int size=0;;
        while(curr != nullptr){
            size++;
            curr=curr->next;
        }
        curr=head;
        for (int i=0; i<k-1; i++){
           curr=curr->next; 
            
        }
        cn=curr->next;
        cout<<curr->val;
        for(int i=0; i<size-k; i++){
            temp=temp->next;
        }
        swap(curr->val,temp->val);
        
//         temp->next=cn;
//         cn->next=curr;
//         curr->next=temp->next;
         return head;
     }
};