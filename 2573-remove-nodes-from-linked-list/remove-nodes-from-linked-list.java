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
    public ListNode reverse(ListNode head)
    {
        if(head==null || head.next==null)
          return head;
        ListNode newnode=reverse(head.next);
        head.next.next=head;
        head.next=null;
        return newnode;
    }
    public ListNode removeNodes(ListNode head) {
        if(head==null || head.next==null)
          return head;
        head=reverse(head);
        int maxval=head.val;
        ListNode cn=head;
        while(cn.next!=null)
        {
            if(cn.next.val<maxval)
            {
                cn.next=cn.next.next;
            }
            else
            {
                maxval=cn.next.val;
                cn=cn.next;
            }
        }
        return reverse(head); 
    }
}