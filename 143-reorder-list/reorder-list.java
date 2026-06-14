/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */class Solution {
    public void reorderList(ListNode head) {
        ListNode d=new ListNode(-1);
        ListNode t=head;
        Stack<ListNode> s=new Stack<>();
        int l=0;
        while(t!=null)
        {
            s.push(t);
            t=t.next;
            l=l+1;
        }
        ListNode prev=d;
        ListNode curr=head;
       for(int i=0;i<l/2;i++)
        {
            ListNode last=s.peek();
            s.pop();
            ListNode next= curr.next;
            curr.next=last;
            last.next=next;
            curr=next;       
        }
        curr.next=null; // last node must be pointing to null
    }
}