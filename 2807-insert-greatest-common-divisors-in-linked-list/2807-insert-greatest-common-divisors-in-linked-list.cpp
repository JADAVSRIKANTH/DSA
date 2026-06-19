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
    int GCD(int a,int b)
    {
        if(b==0)
          return a;
        return GCD(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
          return head;
        ListNode* n1=head;
        ListNode* n2=head->next;
        while(n2!=nullptr)
        {
            int gcdval=GCD(n1->val,n2->val);
            ListNode* gcdnode=new ListNode(gcdval);
            n1->next=gcdnode;
            gcdnode->next=n2;
            n1=n2;
            n2=n2->next; //n2=n2.next;
        }  
        return head;
    }

};