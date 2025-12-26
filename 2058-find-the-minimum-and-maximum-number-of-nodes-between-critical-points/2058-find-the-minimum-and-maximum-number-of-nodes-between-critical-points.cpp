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
    bool criticalpoint(int a,int b,int c)
    {
        if(a>b && c>b || a<b && c<b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res(2,-1);
        if(!head || !head->next || !head->next->next)
          return res;
        int firstp=-1,lastp=-1;
        int pos=0;
        ListNode* temp=head;
        temp=temp->next;
        int pre_value=head->val;
        int mindist=1e5;
        int pre_position=-1;
        while(temp->next!=NULL)
        {
            if(criticalpoint(pre_value,temp->val,temp->next->val))
            {
                if(firstp==-1)
                   firstp=pos;
            
                else{
                    mindist=min(mindist,pos-pre_position);
                }
                lastp=pos;
                pre_position=pos;
            }
        
         pos++;
         pre_value=temp->val;
         temp=temp->next;
        }
        if(firstp==-1|| firstp==lastp)
          return res;
        res[0]=mindist;
        res[1]=lastp-firstp;
        return res;
    }
};