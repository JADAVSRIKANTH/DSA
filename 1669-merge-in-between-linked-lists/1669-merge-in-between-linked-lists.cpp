
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