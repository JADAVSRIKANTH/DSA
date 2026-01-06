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
    vector<int> largestValues1(TreeNode* root)
    {
        vector<int> s;
        if(root==NULL)
           return s;
        queue<TreeNode*> q;
        vector<int> d;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                int m=INT_MIN;
                for(int i=0;i<d.size();i++)
                   m=max(m,d[i]);
                s.push_back(m);
                d.clear();
                if(!q.empty())
                   q.push(NULL);
                continue;
            }
            if(curr->left)
               q.push(curr->left);
            if(curr->right)
               q.push(curr->right);
            d.push_back(curr->val);
        }
        return s;
    }
public:
    vector<int> largestValues(TreeNode* root) {
        return largestValues1(root);  
    }
};