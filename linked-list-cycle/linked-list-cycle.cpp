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
    bool hasCycle(ListNode *head) {
        auto slow_p = head;
        auto fast_p = head;
        while(slow_p and fast_p and fast_p->next){
            slow_p = slow_p->next;
            fast_p = fast_p->next->next;
            if (slow_p == fast_p){
                return 1;
            }
        }
        return 0;
    }
};