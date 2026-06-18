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
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null || k==0)
          return head;
        ListNode tail=head;
        int c=1;
        while(tail.next!=null)
        {
            tail=tail.next;
            c+=1;
        }
         k=k%c;
        if(k==0)
          return head;
        tail.next=head; // circular linkedlist
        int steps=c-k; // no steps to reach the final tail after k time rotation
        ListNode newtail=head;
        for(int i=1;i<steps;i++)
        {
            newtail=newtail.next;
        }
        ListNode newhead=newtail.next;
        newtail.next=null;
        return newhead;
    }
}