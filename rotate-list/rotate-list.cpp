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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return nullptr;
        int size = 0;
        ListNode* tmp = head;
        while (tmp != nullptr) {
            size++;
            tmp = tmp->next;
        }
        k = k % size; //1 
        ListNode* p1 = head;
        ListNode* p2 = head;
        for (int i = 0; i < k; i++) {
            p2 = p2->next;
        }
        while (p2->next != nullptr) {
            p1 = p1->next;
            p2 = p2->next;
        }
        p2->next = head;
        ListNode* newHead = p1->next;
        p1->next = nullptr;
        return newHead;
        
    }
};
