/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
public class Solution {
    public ListNode rotateRight(ListNode head, int k) { 
        if (head == null) return null;
        int size = 0;
        ListNode tmp = head;
        while (tmp != null) {
            size++;
            tmp = tmp.next;
        }
        k = k % size; //1 
        ListNode p1 = head;
        ListNode p2 = head;
        for (int i = 0; i < k; i++) {
            p2 = p2.next;
        }
        while (p2.next != null) {
            p1 = p1.next;
            p2 = p2.next;
        }
        p2.next = head;
        ListNode newHead = p1.next;
        p1.next = null;
        return newHead;
    }
}
