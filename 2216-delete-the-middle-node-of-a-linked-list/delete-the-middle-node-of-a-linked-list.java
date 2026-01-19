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
    public ListNode deleteMiddle(ListNode head) {

       /* ListNode t=head;
        int c=0;
        while(t!=null)
        {
          c++;
          t=t.next;
        }
        if(c<=1)
        {
            return null;
        }
        int m=(c/2);
        t=head;
        for(int i=0;i<m-1;i++)
        {
            t=t.next;
        }
        t.next=t.next.next;
        return head;
        */
        if(head==null || head.next==null)
          return null;
        ListNode s=head;
        ListNode f=head;
        ListNode p=null;
        while(f!=null && f.next!=null)
        {
            p=s;
            s=s.next;
            f=f.next.next;
        }
        p.next=p.next.next;
        return head;
        
    }
}