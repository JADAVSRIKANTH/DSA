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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* prev=NULL;
        ListNode* first=head;
        ListNode* second=head->next;
        while(first!=NULL && second!=NULL)
        {
            //LINKS
            ListNode* third=second->next;
            second->next=first;
            first->next=third;
            if(prev!=NULL)
            {
                prev->next=second;
            }
            else{//if prev is null then we should make second as head
                head=second;
            }
            //updations
            prev=first;
            first=third;
            if(third!=NULL)
            {// if third not NULL then only make second as third->next otherwise second will be null
                second=third->next;
            }
            else{
                second=NULL;
            }
        }
        return head;
    }
};