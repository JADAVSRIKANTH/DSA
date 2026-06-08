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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        /*ListNode t=head;
        int c=0;
        if(head==null)
          return null;
        while(t!=null)
        {
            c++;
            t=t.next;
        }
        int d=c-n;
        ListNode t1=head;
        if(n==c)
          return head.next;
        while(d>1)
        {
            t1=t1.next;
            d--;
        }
        t1.next=t1.next.next; 
        return head;*/
        ListNode d=new ListNode(0);
        d.next=head;
        ListNode fast=d;
        for(int i=0;i<=n;i++)
        {
            fast=fast.next;
        }
        ListNode slow=d;
        while(fast!=null)
        {
            fast=fast.next;
            slow=slow.next;
        }
        slow.next=slow.next.next;
        return d.next;
    }
}