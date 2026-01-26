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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(),nums.end());
        //ListNode* temp=head;
        ListNode* d=new ListNode(0);
        d->next=head;
        ListNode* temp=d;
        while(temp->next)
        {
            if(s.count(temp->next->val))
            {
                temp->next=temp->next->next;
            }
            else
               temp=temp->next;
        }
        return d->next;
    }
};