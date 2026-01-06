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
    long deepestLeavesSum1(TreeNode* root)
    {
        //vector<int> s;
        if(root==NULL)
           return 0;
        queue<TreeNode*> q;
        vector<int> d;
        q.push(root);
        q.push(NULL);
        //int m=INT_MIN;
        long s1=0;
        while(!q.empty())
        {
            s1=0;
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL)
            {
                //int m=INT_MIN;
                for(int i=0;i<d.size();i++)
                  s1+=d[i];
                //s.push_back(m);
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
        return s1;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        return deepestLeavesSum1(root);

        
    }
};