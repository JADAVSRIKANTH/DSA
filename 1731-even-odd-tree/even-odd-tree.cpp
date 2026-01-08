/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL)
           return true;
        if((root->val)%2==0)
           return false;
        queue<TreeNode*> q;
        //vector<int> d;
        int i=0;
        q.push(root);
        //q.push(NULL);
        while(!q.empty())
        {
            int prev;
            if(i%2==0)
               prev=INT_MIN;
            else
               prev=INT_MAX;
            int l=q.size();
            for(int k=0;k<l;k++)
            {
             TreeNode* curr=q.front();
             q.pop();

                if(i%2==0)
                {
                      if((curr->val)%2==0 || curr->val<=prev)
                           return false;
                }
                if(i%2!=0)
                {
                        if((curr->val)%2!=0 || curr->val>=prev)
                           return false;
                }
            
            if(curr->left)
               q.push(curr->left);
            if(curr->right)
               q.push(curr->right);
           // d.push_back(curr->val);
            prev=curr->val;
            }
            i++;
        }
        return true;
    }
};