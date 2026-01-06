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
    int  maxLevelSum1(TreeNode* root)
    {
        if(root==NULL)
           return -1;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> s;
        long long s1=LLONG_MIN;
        //long long sum=0;
        int i=1;
        int level=-1;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                long long sum=0;
                for(auto& t:s)
                 sum=sum+t;
                if(sum>s1)
                {
                   s1=sum;
                   level=i;
                }
                i++;
                s.clear();
                if(!q.empty())
                   q.push(NULL);
                continue;
            }
            if(curr->left)
               q.push(curr->left);
            if(curr->right)
              q.push(curr->right);
            s.push_back(curr->val);
        }
        return level;
    }
    int maxLevelSum(TreeNode* root) {
        return maxLevelSum1(root);
    }
};