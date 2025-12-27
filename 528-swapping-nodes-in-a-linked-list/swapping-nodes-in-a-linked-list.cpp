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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head;
        for(int i=1;i<k;i++)
        {
            first=first->next;
        }
        ListNode* first1=first;
        ListNode* last=head;
        while(first->next!=NULL)
        {
            first=first->next;
            last=last->next;
        }
        swap(first1->val,last->val);
        return head;
    }
};