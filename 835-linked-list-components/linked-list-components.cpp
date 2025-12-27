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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> set;
        for(auto num:nums)
        {
            set.insert(num);
        }

        ListNode* temp=head;
        int components=0;
        while(temp!=NULL)
        {
            if(set.count(temp->val) && (temp->next==NULL || !set.count((temp->next->val))))
              components++;
            temp=temp->next;
        }
       return components; 
    }
};