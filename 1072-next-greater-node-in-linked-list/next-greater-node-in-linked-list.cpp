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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* cur=head;
        vector<int> res;
        while(cur!=NULL)
        {
            ListNode* node=cur->next;
            while(node!=NULL && node->val<=cur->val)
            {
                node=node->next;
            }
            if(node!=NULL)
            {
               res.push_back(node->val);
            }
            else
            {
                res.push_back(0);
            }
            cur=cur->next;
        }
       return res; 
    }
};