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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t=list1;
        for(int i=0;i<a-1;i++)
        {
            t=t->next;
        }
        ListNode* a_1=t; 
        for(int i=a;i<=b;i++)
        {
            t=t->next;
        }
        a_1->next=list2;
        ListNode* b_1=t;
        ListNode* end=list2;
        while(end->next!=NULL)
        {
            end=end->next;
        }
        end->next=b_1->next;
        return list1; 
    }
};